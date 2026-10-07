"""Test the verification tool's failure handling and non-unique-answer checkers."""
import contextlib
import io
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import cp


class RunnerTests(unittest.TestCase):
    def test_tokens_ignore_only_whitespace(self):
        problem = {'checker': 'tokens'}
        case = {'output': '1 2\n'}
        self.assertTrue(cp.validate(problem, case, '1\n 2  '))
        self.assertFalse(cp.validate(problem, case, '1 2 extra'))

    def test_team_checker_accepts_alternative_partition(self):
        case = {'input': '3 2\n1 2\n2 3\n', 'output': '1 2 1'}
        self.assertTrue(cp.validate({'checker': 'bipartite'}, case, '2 1 2'))
        for bad in ('1 1 2', '0 1 0', '1 2', 'IMPOSSIBLE', 'a b c'):
            self.assertFalse(cp.validate({'checker': 'bipartite'}, case, bad))

    def test_topological_checker_accepts_alternative_order(self):
        case = {'input': '3 2\n1 3\n2 3\n', 'output': '1 2 3'}
        self.assertTrue(cp.validate({'checker': 'topological'}, case, '2 1 3'))
        for bad in ('3 1 2', '1 1 3', '1 2', 'IMPOSSIBLE', '1 2 4'):
            self.assertFalse(cp.validate({'checker': 'topological'}, case, bad))

    def test_impossible_requires_exact_verdict(self):
        case = {'input': '2 2\n1 2\n2 1\n', 'output': 'IMPOSSIBLE'}
        self.assertTrue(cp.validate({'checker': 'topological'}, case, 'IMPOSSIBLE\n'))
        self.assertFalse(cp.validate({'checker': 'topological'}, case, '1 2'))

    def test_compile_run_and_crash(self):
        with tempfile.TemporaryDirectory() as folder:
            source = Path(folder) / 'main.cpp'
            source.write_text('#include <iostream>\nint main(){int n; std::cin >> n; std::cout << n * 2;}\n')
            self.assertEqual(cp.run_binary(cp.compile_source(source), '21\n'), '42')
            source.write_text('int main(){return 7;}\n')
            with self.assertRaisesRegex(ValueError, 'exited 7'):
                cp.run_binary(cp.compile_source(source), '')

    def test_timeout_is_failure(self):
        with tempfile.TemporaryDirectory() as folder:
            source = Path(folder) / 'loop.cpp'
            source.write_text('int main(){for(;;) {}}\n')
            with self.assertRaises(subprocess.TimeoutExpired):
                cp.run_binary(cp.compile_source(source), '', timeout=0.1)

    def test_wrong_attempt_does_not_pass(self):
        with tempfile.TemporaryDirectory() as folder:
            source = Path(folder) / 'wrong.cpp'
            source.write_text('#include <iostream>\nint main(){std::cout << 999;}\n')
            with contextlib.redirect_stdout(io.StringIO()):
                with self.assertRaisesRegex(ValueError, 'failed'):
                    cp.test_problem(cp.find_problem('cses-1083'), source)

    def test_practice_does_not_overwrite(self):
        original_root = cp.ROOT
        original_argv = sys.argv[:]
        try:
            with tempfile.TemporaryDirectory() as folder:
                cp.ROOT = Path(folder)
                (cp.ROOT / 'data').mkdir()
                (cp.ROOT / 'templates').mkdir()
                (cp.ROOT / 'data/problems.json').write_text(
                    '[{"id":"demo","title":"Demo","url":"https://example.com"}]')
                (cp.ROOT / 'templates/main.cpp').write_text('int main(){}\n')
                sys.argv = ['cp.py', 'practice', 'demo']
                with contextlib.redirect_stdout(io.StringIO()):
                    cp.main()
                attempt = cp.ROOT / 'practice/demo.cpp'
                attempt.write_text('my unfinished attempt\n')
                with self.assertRaises(FileExistsError):
                    cp.main()
                self.assertEqual(attempt.read_text(), 'my unfinished attempt\n')
        finally:
            cp.ROOT = original_root
            sys.argv = original_argv


if __name__ == '__main__':
    unittest.main()
