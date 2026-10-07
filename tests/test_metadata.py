"""Regressions for catalogue entries accidentally sharing or duplicating evidence."""
import contextlib
import io
import json
from pathlib import Path
import sys
import tempfile
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parents[1]/'tools'))
import cp


class MetadataTests(unittest.TestCase):
    @contextlib.contextmanager
    def archive(self):
        # Match cp.ROOT's canonical-path contract; macOS temp paths use /var symlinks.
        with tempfile.TemporaryDirectory() as folder, patch.object(cp, 'ROOT', Path(folder).resolve()):
            entries = []
            for index in range(2):
                key = f'demo-{index}'
                item = dict(id=key, title=key, url='https://example.com/problem',
                            solution=f'solutions/{key}.cpp', notes=f'notes/{key}.md',
                            tests=f'tests/cases/{key}.json', tags=['implementation'],
                            time='O(1)', space='O(1)')
                for field in ('solution', 'notes', 'tests'):
                    path = cp.ROOT/item[field]
                    path.parent.mkdir(parents=True, exist_ok=True)
                    path.write_text('reference\n')
                (cp.ROOT/item['tests']).write_text(json.dumps([
                    {'name':'one', 'input':'1\n', 'output':'1\n'}]))
                entries.append(item)
            (cp.ROOT/'data').mkdir()
            (cp.ROOT/'docs').mkdir()
            (cp.ROOT/'data/problems.json').write_text(json.dumps(entries))
            (cp.ROOT/'data/acceptances.json').write_text('[]')
            for path, text in cp.generated_docs().items():
                (cp.ROOT/path).write_text(text)
            yield entries

    def test_each_problem_owns_its_notes_and_fixtures(self):
        for field in ('notes', 'tests'):
            with self.subTest(field=field), self.archive() as entries:
                entries[1][field] = entries[0][field]
                (cp.ROOT/'data/problems.json').write_text(json.dumps(entries))
                with self.assertRaisesRegex(ValueError, f'Shared {field} path'):
                    cp.check_metadata()

    def test_whitespace_does_not_make_a_new_input_case(self):
        with self.archive() as entries:
            path = cp.ROOT/entries[0]['tests']
            path.write_text(json.dumps([
                {'name':'sample', 'input':'1\n2\n', 'output':'3'},
                {'name':'edge', 'input':'1 2\r\n', 'output':'3'}]))
            with self.assertRaisesRegex(ValueError, 'Duplicate fixture inputs'):
                cp.check_metadata()

    def test_empty_answer_is_valid_evidence(self):
        with self.archive() as entries:
            (cp.ROOT/entries[0]['tests']).write_text(json.dumps([
                {'name':'empty-result', 'input':'||\n', 'output':'\n'}]))
            with contextlib.redirect_stdout(io.StringIO()):
                cp.check_metadata()
            self.assertFalse(cp.validate({}, {'output':'\n'}, 'unexpected'))


if __name__ == '__main__':
    unittest.main()
