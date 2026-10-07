"""Semantic checkers for tasks whose valid answer is not a unique token sequence."""
from collections import Counter, deque
import math


def permutation(case, actual):
    n = int(case['input'])
    if n in (2, 3):
        return actual.split() == ['NO', 'SOLUTION']
    values = list(map(int, actual.split()))
    return sorted(values) == list(range(1, n + 1)) and all(
        abs(a - b) != 1 for a, b in zip(values, values[1:]))


def two_sets(case, actual):
    n = int(case['input'])
    tokens = actual.split()
    if n * (n + 1) // 2 % 2:
        return tokens == ['NO']
    if not tokens or tokens[0] != 'YES':
        return False
    values = list(map(int, tokens[1:]))
    first_count = values[0]
    if first_count < 0 or first_count + 1 >= len(values):
        return False
    a = values[1:first_count + 1]
    second_count = values[first_count + 1]
    b = values[first_count + 2:]
    return second_count == len(b) and sorted(a + b) == list(range(1, n + 1)) and sum(a) == sum(b)


def palindrome(case, actual):
    source = case['input'].strip()
    if sum(value % 2 for value in Counter(source).values()) > 1:
        return actual.split() == ['NO', 'SOLUTION']
    tokens = actual.split()
    return len(tokens) == 1 and tokens[0] == tokens[0][::-1] and Counter(tokens[0]) == Counter(source)


def gray_code(case, actual):
    n = int(case['input'])
    codes = actual.split()
    return (len(codes) == 2**n and len(set(codes)) == len(codes)
            and all(len(code) == n and set(code) <= {'0', '1'} for code in codes)
            and all(sum(a != b for a, b in zip(x, y)) == 1 for x, y in zip(codes, codes[1:])))


def hanoi(case, actual):
    n = int(case['input'])
    values = list(map(int, actual.split()))
    if not values or values[0] != 2**n - 1 or len(values) != 1 + 2 * values[0]:
        return False
    pegs = [list(range(n, 0, -1)), [], []]
    for source, target in zip(values[1::2], values[2::2]):
        if source not in (1, 2, 3) or target not in (1, 2, 3) or source == target:
            return False
        a, b = pegs[source - 1], pegs[target - 1]
        if not a or (b and a[-1] > b[-1]):
            return False
        b.append(a.pop())
    return pegs == [[], [], list(range(n, 0, -1))]


def labyrinth(case, actual):
    data = case['input'].split()
    rows, cols = map(int, data[:2])
    grid = data[2:]
    start = next((r, c) for r in range(rows) for c in range(cols) if grid[r][c] == 'A')
    end = next((r, c) for r in range(rows) for c in range(cols) if grid[r][c] == 'B')
    deltas = {'U': (-1, 0), 'D': (1, 0), 'L': (0, -1), 'R': (0, 1)}
    distance, queue = {start: 0}, deque([start])
    while queue:
        r, c = queue.popleft()
        for dr, dc in deltas.values():
            v = (r + dr, c + dc)
            if 0 <= v[0] < rows and 0 <= v[1] < cols and grid[v[0]][v[1]] != '#' and v not in distance:
                distance[v] = distance[(r, c)] + 1
                queue.append(v)
    tokens = actual.split()
    if end not in distance:
        return tokens == ['NO']
    if len(tokens) != 3 or tokens[0] != 'YES' or int(tokens[1]) != distance[end] or len(tokens[2]) != distance[end]:
        return False
    r, c = start
    for move in tokens[2]:
        if move not in deltas:
            return False
        dr, dc = deltas[move]
        r, c = r + dr, c + dc
        if not (0 <= r < rows and 0 <= c < cols) or grid[r][c] == '#':
            return False
    return (r, c) == end


def lcs(case, actual):
    a, b = case['input'].split()
    tokens = actual.split()
    if len(tokens) > 1:
        return False
    result = tokens[0] if tokens else ''
    row = [0] * (len(b) + 1)
    for x in a:
        previous = row[:]
        for j, y in enumerate(b, 1):
            row[j] = previous[j - 1] + 1 if x == y else max(previous[j], row[j - 1])
    def subsequence(source):
        it = iter(source)
        return all(char in it for char in result)
    return len(result) == row[-1] and subsequence(a) and subsequence(b)


def probability(case, actual):
    tokens = actual.split()
    if len(tokens) != 1:
        return False
    value = float(tokens[0])
    return math.isfinite(value) and 0 <= value <= 1 and math.isclose(
        value, float(case['output']), rel_tol=0, abs_tol=1e-9)


CHECKERS = {
    'permutation': permutation, 'two_sets': two_sets, 'palindrome': palindrome,
    'gray_code': gray_code, 'hanoi': hanoi, 'labyrinth': labyrinth,
    'lcs': lcs, 'probability': probability,
}
