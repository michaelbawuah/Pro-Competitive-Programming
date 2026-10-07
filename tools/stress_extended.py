"""Independent small-input oracles for the expansion to 100 problems."""
from collections import deque
from functools import lru_cache, reduce
from itertools import combinations, permutations, product
import math
import operator


def numbers(values):
    return ' '.join(map(str, values))


def subsets(values):
    return [sum(values[i] for i in range(len(values)) if mask >> i & 1)
            for mask in range(1 << len(values))]


def apple(rng):
    weights = [rng.randint(1, 100) for _ in range(rng.randint(1, 10))]
    answer = min(abs(sum(weights) - 2 * chosen) for chosen in subsets(weights))
    return f'{len(weights)}\n{numbers(weights)}\n', str(answer)


def digit_queries(rng):
    stream = ''.join(map(str, range(1, 6000)))
    queries = [rng.randint(1, len(stream)) for _ in range(20)]
    return f'{len(queries)}\n' + '\n'.join(map(str, queries)) + '\n', '\n'.join(stream[k - 1] for k in queries)


def tickets(rng):
    prices = [rng.randint(1, 20) for _ in range(rng.randint(1, 10))]
    buyers = [rng.randint(1, 25) for _ in range(rng.randint(1, 10))]
    remaining = prices[:]
    answers = []
    for limit in buyers:
        eligible = [value for value in remaining if value <= limit]
        answer = max(eligible, default=-1)
        answers.append(answer)
        if answer != -1:
            remaining.remove(answer)
    return f'{len(prices)} {len(buyers)}\n{numbers(prices)}\n{numbers(buyers)}\n', numbers(answers)


def missing_coin(rng):
    coins = [rng.randint(1, 15) for _ in range(rng.randint(1, 10))]
    reachable = set(subsets(coins))
    answer = next(value for value in range(1, sum(coins) + 2) if value not in reachable)
    return f'{len(coins)}\n{numbers(coins)}\n', str(answer)


def collecting(rng):
    values = list(range(1, rng.randint(1, 15) + 1))
    rng.shuffle(values)
    target, rounds = 1, 0
    while target <= len(values):
        rounds += 1
        for value in values:
            if value == target:
                target += 1
    return f'{len(values)}\n{numbers(values)}\n', str(rounds)


def towers(rng):
    cubes = [rng.randint(1, 8) for _ in range(rng.randint(1, 9))]
    @lru_cache(None)
    def assign(index, tops):
        if index == len(cubes):
            return len(tops)
        cube = cubes[index]
        answers = [assign(index + 1, tuple(sorted(tops + (cube,))))]
        for i, top in enumerate(tops):
            if top > cube:
                changed = list(tops)
                changed[i] = cube
                answers.append(assign(index + 1, tuple(sorted(changed))))
        return min(answers)
    return f'{len(cubes)}\n{numbers(cubes)}\n', str(assign(0, ()))


def traffic(rng):
    length = rng.randint(3, 30)
    additions = rng.sample(range(1, length), rng.randint(1, min(10, length - 1)))
    positions, answers = [0, length], []
    for point in additions:
        positions.append(point)
        positions.sort()
        answers.append(max(b - a for a, b in zip(positions, positions[1:])))
    return f'{length} {len(additions)}\n{numbers(additions)}\n', numbers(answers)


def deadlines(rng):
    tasks = [(rng.randint(1, 9), rng.randint(1, 30)) for _ in range(rng.randint(1, 7))]
    best = -10**9
    for order in permutations(tasks):
        time, reward = 0, 0
        for duration, deadline in order:
            time += duration
            reward += deadline - time
        best = max(best, reward)
    return f'{len(tasks)}\n' + ''.join(f'{a} {d}\n' for a, d in tasks), str(best)


def nearest(rng):
    values = [rng.randint(1, 10) for _ in range(rng.randint(1, 20))]
    answers = [next((j + 1 for j in range(i - 1, -1, -1) if values[j] < value), 0)
               for i, value in enumerate(values)]
    return f'{len(values)}\n{numbers(values)}\n', numbers(answers)


def ordered_coins(rng):
    coins = rng.sample(range(1, 8), rng.randint(1, 4))
    target = rng.randint(1, 12)
    def enumerate_sequences(remaining):
        if remaining == 0:
            return 1
        return sum(enumerate_sequences(remaining - coin) for coin in coins if coin <= remaining)
    return f'{len(coins)} {target}\n{numbers(coins)}\n', str(enumerate_sequences(target))


def removing_digits(rng):
    start = rng.randint(1, 400)
    queue, distance = deque([start]), {start: 0}
    while 0 not in distance:
        value = queue.popleft()
        for digit in set(map(int, str(value))) - {0}:
            next_value = value - digit
            if next_value not in distance:
                distance[next_value] = distance[value] + 1
                queue.append(next_value)
    return f'{start}\n', str(distance[0])


def grid_paths(rng, square):
    height = rng.randint(2, 6)
    width = height if square else rng.randint(2, 6)
    wall = '*' if square else '#'
    cells = [[wall if rng.randrange(4) == 0 else '.' for _ in range(width)] for _ in range(height)]
    if not square:
        cells[0][0] = cells[-1][-1] = '.'
    def enumerate_paths(row, column):
        if row >= height or column >= width or cells[row][column] == wall:
            return 0
        if (row, column) == (height - 1, width - 1):
            return 1
        return enumerate_paths(row + 1, column) + enumerate_paths(row, column + 1)
    header = str(height) if square else f'{height} {width}'
    return header + '\n' + '\n'.join(''.join(row) for row in cells) + '\n', str(enumerate_paths(0, 0))


def description(rng):
    n, maximum = rng.randint(1, 7), rng.randint(1, 4)
    fixed = [rng.randint(0, maximum) if rng.randrange(2) else 0 for _ in range(n)]
    answer = sum(all(f == 0 or f == x for f, x in zip(fixed, candidate))
                 and all(abs(a - b) <= 1 for a, b in zip(candidate, candidate[1:]))
                 for candidate in product(range(1, maximum + 1), repeat=n))
    return f'{n} {maximum}\n{numbers(fixed)}\n', str(answer)


def money_sums(rng):
    coins = [rng.randint(1, 15) for _ in range(rng.randint(1, 10))]
    sums = sorted(set(subsets(coins)) - {0})
    return f'{len(coins)}\n{numbers(coins)}\n', f'{len(sums)}\n{numbers(sums)}'


def two_sets_count(rng):
    n = rng.randint(1, 15)
    total = n * (n + 1) // 2
    answer = sum(2 * chosen == total for chosen in subsets(list(range(1, n + 1)))) // 2
    return f'{n}\n', str(answer)


def projects(rng):
    items = [(start, start + rng.randint(0, 5), rng.randint(1, 30))
             for start in (rng.randint(1, 12) for _ in range(rng.randint(1, 9)))]
    best = 0
    for mask in range(1 << len(items)):
        chosen = [item for i, item in enumerate(items) if mask >> i & 1]
        if all(a[1] < b[0] or b[1] < a[0] for a, b in combinations(chosen, 2)):
            best = max(best, sum(item[2] for item in chosen))
    return f'{len(items)}\n' + ''.join(f'{a} {b} {p}\n' for a, b, p in items), str(best)


def shortest_routes(rng):
    n = rng.randint(2, 7)
    edges = [(*rng.sample(range(n), 2), rng.randint(1, 30)) for _ in range(rng.randint(1, 15))]
    answers = []
    for source in range(n):
        distance = [10**12] * n
        distance[source] = 0
        for _ in range(n - 1):
            old = distance[:]
            for a, b, cost in edges:
                distance[a] = min(distance[a], old[b] + cost)
                distance[b] = min(distance[b], old[a] + cost)
        answers += [str(-1 if value == 10**12 else value) for value in distance]
    text = f'{n} {len(edges)} {n*n}\n' + ''.join(f'{a+1} {b+1} {c}\n' for a, b, c in edges)
    text += ''.join(f'{a+1} {b+1}\n' for a in range(n) for b in range(n))
    return text, '\n'.join(answers)


def discount(rng):
    n = rng.randint(2, 7)
    edges = [(i, i + 1, rng.randint(1, 30)) for i in range(n - 1)]
    edges += [(*rng.sample(range(n), 2), rng.randint(1, 30)) for _ in range(rng.randint(1, 10))]
    graph = [[] for _ in range(n)]
    for a, b, cost in edges:
        graph[a].append((b, cost))
    def enumerate_paths(vertex, visited, cost, saving):
        if vertex == n - 1:
            return cost - saving
        answers = [10**12]
        for next_vertex, price in graph[vertex]:
            if next_vertex not in visited:
                answers.append(enumerate_paths(next_vertex, visited | {next_vertex}, cost + price, max(saving, price - price // 2)))
        return min(answers)
    return f'{n} {len(edges)}\n' + ''.join(f'{a+1} {b+1} {c}\n' for a, b, c in edges), str(enumerate_paths(0, {0}, 0, 0))


def road_construction(rng):
    n = rng.randint(2, 12)
    edges = [rng.sample(range(n), 2) for _ in range(rng.randint(1, 20))]
    graph = [set() for _ in range(n)]
    answers = []
    for a, b in edges:
        graph[a].add(b)
        graph[b].add(a)
        unseen, sizes = set(range(n)), []
        while unseen:
            stack, reached = [unseen.pop()], set()
            while stack:
                vertex = stack.pop()
                if vertex in reached:
                    continue
                reached.add(vertex)
                stack.extend(graph[vertex] - reached)
            unseen -= reached
            sizes.append(len(reached))
        answers.append(f'{len(sizes)} {max(sizes)}')
    return f'{n} {len(edges)}\n' + ''.join(f'{a+1} {b+1}\n' for a, b in edges), '\n'.join(answers)


def dag(rng, count):
    n = rng.randint(2, 8)
    order = list(range(n))
    rng.shuffle(order)
    possible = list(combinations(order, 2))
    edges = rng.sample(possible, rng.randint(1, len(possible)))
    graph = [[] for _ in range(n)]
    for a, b in edges:
        graph[a].append(b)
    def count_paths(vertex):
        return 1 if vertex == n - 1 else sum(count_paths(next_vertex) for next_vertex in graph[vertex])
    def longest(vertex):
        return max((1 + longest(next_vertex) for next_vertex in graph[vertex]), default=0)
    answer = count_paths(0) if count else max(longest(v) for v in range(n))
    return f'{n} {len(edges)}\n' + ''.join(f'{a+1} {b+1}\n' for a, b in edges), str(answer)


def labyrinth(rng):
    rows, columns = rng.randint(2, 6), rng.randint(2, 6)
    grid = [['#' if rng.randrange(3) == 0 else '.' for _ in range(columns)] for _ in range(rows)]
    start, finish = rng.sample([(r, c) for r in range(rows) for c in range(columns)], 2)
    grid[start[0]][start[1]], grid[finish[0]][finish[1]] = 'A', 'B'
    # The semantic checker independently validates reachability, minimum length, and every move.
    return f'{rows} {columns}\n' + '\n'.join(''.join(row) for row in grid) + '\n', ''


def tree_case(rng, kind):
    n = rng.randint(1, 18)
    parents = [-1] + [rng.randrange(vertex) for vertex in range(1, n)]
    graph = [[] for _ in range(n)]
    for vertex in range(1, n):
        graph[vertex].append(parents[vertex])
        graph[parents[vertex]].append(vertex)
    if kind == 'subordinates':
        counts = [0] * n
        for vertex in range(n):
            boss = parents[vertex]
            while boss != -1:
                counts[boss] += 1
                boss = parents[boss]
        return f'{n}\n{numbers(p + 1 for p in parents[1:])}\n', numbers(counts)
    if kind == 'ancestors':
        queries = [(rng.randrange(n), rng.randint(1, n)) for _ in range(20)]
        answers = []
        for vertex, steps in queries:
            for _ in range(steps):
                if vertex != -1:
                    vertex = parents[vertex]
            answers.append(vertex + 1 if vertex != -1 else -1)
        text = f'{n} {len(queries)}\n{numbers(p + 1 for p in parents[1:])}\n'
        return text + ''.join(f'{v+1} {k}\n' for v, k in queries), numbers(answers)
    eccentricity = []
    for source in range(n):
        distance, queue = {source: 0}, deque([source])
        while queue:
            vertex = queue.popleft()
            for next_vertex in graph[vertex]:
                if next_vertex not in distance:
                    distance[next_vertex] = distance[vertex] + 1
                    queue.append(next_vertex)
        eccentricity.append(max(distance.values()))
    text = f'{n}\n' + ''.join(f'{v+1} {parents[v]+1}\n' for v in range(1, n))
    return text, str(max(eccentricity)) if kind == 'diameter' else numbers(eccentricity)


def range_case(rng, xor):
    n = rng.randint(1, 20)
    values = [rng.randint(1, 10**9) for _ in range(n)]
    lines = [f'{n} 30', numbers(values)]
    answers = []
    for query in range(30):
        left, right = sorted(rng.sample(range(n + 1), 2))
        if xor:
            lines.append(f'{left + 1} {right}')
            answers.append(reduce(operator.xor, values[left:right], 0))
        elif query != 29 and rng.randrange(2):
            delta = rng.randint(1, 10**9)
            lines.append(f'1 {left + 1} {right} {delta}')
            for index in range(left, right):
                values[index] += delta
        else:
            lines.append(f'2 {left + 1}')
            answers.append(values[left])
    return '\n'.join(lines) + '\n', numbers(answers)


def exponentiation(rng, tower):
    queries, answers = [], []
    for _ in range(20):
        a = rng.randint(0, 10**9)
        if rng.randrange(4) == 0:
            a = 0
        b = rng.randint(0, 20)
        if tower:
            c = rng.randint(0, 10)
            queries.append(f'{a} {b} {c}')
            answers.append(pow(a, b**c, 1000000007))
        else:
            queries.append(f'{a} {b}')
            answers.append(pow(a, b, 1000000007))
    return f'{len(queries)}\n' + '\n'.join(queries) + '\n', numbers(answers)


def common_divisors(rng):
    values = [rng.randint(1, 200) for _ in range(rng.randint(2, 12))]
    answer = max(math.gcd(a, b) for a, b in combinations(values, 2))
    return f'{len(values)}\n{numbers(values)}\n', str(answer)


def string_structure(rng, borders):
    text = ''.join(rng.choices('abc', k=rng.randint(1, 35)))
    if borders:
        answers = [length for length in range(1, len(text)) if text[:length] == text[-length:]]
    else:
        answers = [length for length in range(1, len(text) + 1)
                   if ''.join(text[i % length] for i in range(len(text))) == text]
    return text + '\n', numbers(answers)


def knapsack(rng):
    capacity = rng.randint(1, 40)
    items = [(rng.randint(1, capacity), rng.randint(1, 100)) for _ in range(rng.randint(1, 10))]
    best = 0
    for mask in range(1 << len(items)):
        chosen = [item for i, item in enumerate(items) if mask >> i & 1]
        if sum(item[0] for item in chosen) <= capacity:
            best = max(best, sum(item[1] for item in chosen))
    return f'{len(items)} {capacity}\n' + ''.join(f'{w} {v}\n' for w, v in items), str(best)


def lcs(rng):
    first = ''.join(rng.choices('abc', k=rng.randint(1, 9)))
    second = ''.join(rng.choices('abc', k=rng.randint(1, 9)))
    best = ''
    for mask in range(1 << len(first)):
        candidate = ''.join(x for i, x in enumerate(first) if mask >> i & 1)
        it = iter(second)
        if len(candidate) > len(best) and all(x in it for x in candidate):
            best = candidate
    return f'{first}\n{second}\n', best


def coins_probability(rng):
    n = rng.choice([1, 3, 5, 7, 9])
    chances = [rng.randint(1, 99) for _ in range(n)]
    # Enumerate all outcomes with exact integer weights before dividing once.
    numerator = 0
    for mask in range(1 << n):
        if mask.bit_count() > n // 2:
            numerator += math.prod(p if mask >> i & 1 else 100 - p for i, p in enumerate(chances))
    return f'{n}\n' + ' '.join(f'{p / 100:.2f}' for p in chances) + '\n', repr(numerator / 100**n)


def stones(rng):
    total = rng.randint(1, 15)
    moves = sorted(rng.sample(range(1, total + 1), rng.randint(1, min(4, total))))
    def minimax(stones_left, first_turn):
        children = [minimax(stones_left - move, not first_turn) for move in moves if move <= stones_left]
        if not children:
            return not first_turn
        return any(children) if first_turn else all(children)
    answer = 'First' if minimax(total, True) else 'Second'
    return f'{len(moves)} {total}\n{numbers(moves)}\n', answer


GENERATORS = {
    'cses-1623': apple,
    'cses-2431': digit_queries,
    'cses-1091': tickets,
    'cses-2183': missing_coin,
    'cses-2216': collecting,
    'cses-1073': towers,
    'cses-1163': traffic,
    'cses-1630': deadlines,
    'cses-1645': nearest,
    'cses-1635': ordered_coins,
    'cses-1637': removing_digits,
    'cses-1638': lambda r: grid_paths(r, True),
    'cses-1746': description,
    'cses-1745': money_sums,
    'cses-1093': two_sets_count,
    'cses-1140': projects,
    'cses-1672': shortest_routes,
    'cses-1195': discount,
    'cses-1676': road_construction,
    'cses-1681': lambda r: dag(r, True),
    'cses-1193': labyrinth,
    'cses-1674': lambda r: tree_case(r, 'subordinates'),
    'cses-1131': lambda r: tree_case(r, 'diameter'),
    'cses-1132': lambda r: tree_case(r, 'eccentricity'),
    'cses-1687': lambda r: tree_case(r, 'ancestors'),
    'cses-1650': lambda r: range_case(r, True),
    'cses-1651': lambda r: range_case(r, False),
    'cses-1095': lambda r: exponentiation(r, False),
    'cses-1712': lambda r: exponentiation(r, True),
    'cses-1081': common_divisors,
    'cses-1732': lambda r: string_structure(r, True),
    'cses-1733': lambda r: string_structure(r, False),
    'atcoder-dp_d': knapsack,
    'atcoder-dp_e': knapsack,
    'atcoder-dp_f': lcs,
    'atcoder-dp_g': lambda r: dag(r, False),
    'atcoder-dp_h': lambda r: grid_paths(r, False),
    'atcoder-dp_i': coins_probability,
    'atcoder-dp_k': stones,
}
