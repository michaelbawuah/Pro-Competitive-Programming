.PHONY: test stress check sanitize

test:
	python3 tools/cp.py test all
	python3 -m unittest discover -s tests -p 'test_*.py'

stress:
	python3 tools/cp.py stress --cases 100

check:
	python3 tools/cp.py check

sanitize:
	python3 tools/cp.py test all --sanitize
