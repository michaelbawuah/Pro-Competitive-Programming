import sys
from pathlib import Path
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import cp


class SemanticCheckerTests(unittest.TestCase):
    def check(self, checker, text, good, bad, expected=''):
        problem, case = {'checker': checker}, {'input': text, 'output': expected}
        for result in good:
            self.assertTrue(cp.validate(problem, case, result), (checker, result))
        for result in bad:
            self.assertFalse(cp.validate(problem, case, result), (checker, result))

    def test_permutations(self):
        self.check('permutation', '4', ['2 4 1 3', '3 1 4 2'], ['1 2 3 4', '2 4 1 1', 'NO SOLUTION'])
        self.check('permutation', '3', ['NO SOLUTION'], ['1 3 2'])

    def test_partitions(self):
        self.check('two_sets', '3', ['YES 1 3 2 1 2', 'YES 2 1 2 1 3'],
                   ['YES 1 1 2 2 3', 'YES 2 1 2 1 2', 'YES -1', 'NO'])
        self.check('two_sets', '2', ['NO'], ['YES 1 1 1 2'])

    def test_palindromes(self):
        self.check('palindrome', 'AABB', ['ABBA', 'BAAB'], ['ABAB', 'AAAA', 'NO SOLUTION'])
        self.check('palindrome', 'ABC', ['NO SOLUTION'], ['ABA'])

    def test_gray_codes(self):
        self.check('gray_code', '2', ['00 01 11 10', '10 11 01 00'],
                   ['00 01 10 11', '00 01 11 00', '0 1 11 10'])

    def test_hanoi(self):
        self.check('hanoi', '2', ['3 1 2 1 3 2 3'],
                   ['3 1 3 1 3 3 3', '2 1 2 1 3', '3 1 4 1 3 4 3'])

    def test_shortest_paths(self):
        self.check('labyrinth', '2 3\nA..\n..B\n', ['YES 3 RRD', 'YES 3 DRR'],
                   ['YES 5 RLRRD', 'YES 3 RRX', 'YES 2 RD', 'NO'])
        self.check('labyrinth', '1 3\nA#B\n', ['NO'], ['YES 2 RR'])

    def test_longest_subsequence(self):
        self.check('lcs', 'abc\nbac\n', ['ac', 'bc'], ['a', 'abc', 'ca', 'a c'])
        self.check('lcs', 'a\nz\n', ['\n'], ['a'])

    def test_probability_tolerance(self):
        self.check('probability', '1\n0.5\n', ['0.5', '0.5000000005'],
                   ['0.50001', 'nan', 'inf', '-0.5', '0.5 0.5'], expected='0.5')


if __name__ == '__main__':
    unittest.main()
