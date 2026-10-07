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


if __name__=='__main__':
    unittest.main()
