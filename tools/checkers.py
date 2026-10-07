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


def yes_no(case, actual):
    return actual.upper().split() == case['output'].upper().split()


def percentage(case, actual):
    tokens = actual.split()
    return len(tokens) == 1 and math.isfinite(float(tokens[0])) and math.isclose(
        float(tokens[0]), float(case['output']), rel_tol=1e-4, abs_tol=1e-4)


def restored_numbers(case, actual):
    values = list(map(int, actual.split()))
    if len(values) != 3 or min(values) <= 0:
        return False
    a, b, c = values
    return sorted([a+b, a+c, b+c, a+b+c]) == sorted(map(int, case['input'].split()))


def composite_pair(case, actual):
    def composite(n):
        return n > 3 and any(n % d == 0 for d in range(2, math.isqrt(n) + 1))
    values = list(map(int, actual.split()))
    return len(values) == 2 and sum(values) == int(case['input']) and all(map(composite, values))


def round_sums(case, actual):
    source = list(map(int, case['input'].split()))
    tokens = list(map(int, actual.split()))
    index = 0
    for n in source[1:]:
        count = tokens[index]
        index += 1
        pieces = tokens[index:index+count]
        index += count
        if count != sum(c != '0' for c in str(n)) or len(pieces) != count or sum(pieces) != n:
            return False
        if any(x <= 0 or sum(c != '0' for c in str(x)) != 1 for x in pieces):
            return False
    return index == len(tokens)


def balanced_array(case, actual):
    lengths = list(map(int, case['input'].split()))[1:]
    tokens = actual.split()
    index = 0
    for n in lengths:
        verdict = tokens[index].upper()
        index += 1
        if n % 4:
            if verdict != 'NO':
                return False
            continue
        if verdict != 'YES':
            return False
        values = list(map(int, tokens[index:index+n]))
        index += n
        if len(values) != n or len(set(values)) != n or not all(1 <= x <= 10**9 for x in values):
            return False
        if any(x % 2 for x in values[:n//2]) or any(x % 2 != 1 for x in values[n//2:]):
            return False
        if sum(values[:n//2]) != sum(values[n//2:]):
            return False
    return index == len(tokens)


def div_seven(case, actual):
    original = case['input'].split()[1:]
    answers = actual.split()
    if len(original) != len(answers):
        return False
    for source, result in zip(original, answers):
        if len(result) != len(source) or result[0] == '0' or not result.isdecimal() or int(result) % 7:
            return False
        # A block of ten consecutive numbers always contains a multiple of seven.
        required = 0 if int(source) % 7 == 0 else 1
        if sum(a != b for a, b in zip(source, result)) != required:
            return False
    return True


def triple(case, actual):
    data = list(map(int, case['input'].split()))
    answers = list(map(int, actual.split()))
    if len(answers) != data[0]:
        return False
    index = 1
    for answer in answers:
        n = data[index]
        frequencies = Counter(data[index+1:index+1+n])
        index += n + 1
        if answer == -1:
            if any(count >= 3 for count in frequencies.values()):
                return False
        elif frequencies[answer] < 3:
            return False
    return True


CHECKERS.update({'yes_no': yes_no, 'percentage': percentage, 'restored_numbers': restored_numbers,
                 'composite_pair': composite_pair, 'round_sums': round_sums,
                 'balanced_array': balanced_array, 'div_seven': div_seven, 'triple': triple})
