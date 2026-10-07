"""Guard the shared scalar checker against permissive numeric parsing."""
import sys
from pathlib import Path
import unittest
sys.path.insert(0,str(Path(__file__).resolve().parents[1]/'tools'))
from checkers import floating


class FloatingTests(unittest.TestCase):
    def test_finite_tolerance_and_scientific_notation(self):
        self.assertTrue(floating({'output':'1000'},'1e3\n'))
        self.assertTrue(floating({'output':'0'},'0.0000001'))
        self.assertFalse(floating({'output':'1000'},'1000.1'))

    def test_nonfinite_and_extra_tokens_fail(self):
        for actual in ('nan','inf','-inf','1e9999','0 0','', 'nonsense'):
            self.assertFalse(floating({'output':'0'},actual),actual)


class ConstructionTests(unittest.TestCase):
    def test_divisor_optima_allow_ties(self):
        from checkers import gcdness
        case={'input':'2\n6 12\n','output':'2'}
        for output in ('2','3','6'):
            self.assertTrue(gcdness(case,output))
        for output in ('1','4','7','2 3','nan'):
            self.assertFalse(gcdness(case,output))

    def test_multiple_requires_membership_or_proven_impossibility(self):
        from checkers import range_multiple
        case={'input':'4 10 3\n','output':'6'}
        for output in ('6','9'):
            self.assertTrue(range_multiple(case,output))
        for output in ('-1','3','7','12','6 9'):
            self.assertFalse(range_multiple(case,output))
        self.assertTrue(range_multiple({'input':'4 5 3','output':'-1'},'-1'))

    def test_distances_reject_nonfinite_and_wrong_length(self):
        from checkers import distance_vector
        case={'input':'1\n0','output':'0 0 0'}
        self.assertTrue(distance_vector(case,'0 0.0 0e0'))
        for output in ('0 0','0 nan 0','0 inf 0','0 0 0 0','0 -1 0'):
            self.assertFalse(distance_vector(case,output))

    def test_signed_coordinate_tolerances(self):
        from checkers import floating_vector
        case = {'output': '-0.6 0.8'}
        self.assertTrue(floating_vector(case, '-0.60000001 8e-1'))
        for output in ('0.6 0.8', '-0.6', '-0.6 0.8 0', 'nan 0.8', '-0.6 inf', 'x y'):
            self.assertFalse(floating_vector(case, output), output)
        self.assertFalse(floating_vector({'output': ''}, ''))


if __name__ == '__main__':
    unittest.main()
