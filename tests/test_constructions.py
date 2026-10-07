import sys
from pathlib import Path
import unittest
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
import cp


class ConstructionTests(unittest.TestCase):
    def check(self, kind, source, good, bad, expected=''):
        case = {'input': source, 'output': expected}
        self.assertTrue(cp.validate({'checker': kind}, case, good))
        for result in bad:
            self.assertFalse(cp.validate({'checker': kind}, case, result))

    def test_round_sums(self):
        self.check('round_sums', '1\n5009\n', '2\n9 5000', ['1 5009', '3 5000 5 4', '2 5000 8'])

    def test_balanced(self):
        self.check('balanced_array', '2\n2\n4\n', 'NO YES 4 8 3 9', ['YES 2 1 YES 2 4 1 5', 'NO YES 2 4 1 3', 'NO YES 2 2 1 3'])

    def test_composites(self):
        self.check('composite_pair', '20\n', '8 12', ['7 13', '4 8', '20'])

    def test_restored(self):
        self.check('restored_numbers', '3 4 5 6\n', '3 1 2', ['0 3 3', '1 2 4', '1 2'])

    def test_divisible_seven(self):
        self.check('div_seven', '3\n42\n23\n377\n', '42 63 777', ['49 21 371', '42 23 377', '42 21 077', '42 21'])

    def test_triples(self):
        self.check('triple', '2\n6\n1 1 1 2 2 2\n2\n1 2\n', '2 -1', ['-1 -1', '1 1', '3 -1'])

    def test_percentage(self):
        self.check('percentage', '1\n50\n', '50.00001', ['NaN', 'inf', '49', '50 50'], '50')

    def test_verdict_case(self):
        self.check('yes_no', '', 'Yes no YES', ['YES NO', 'yes maybe yes'], 'YES NO YES')
