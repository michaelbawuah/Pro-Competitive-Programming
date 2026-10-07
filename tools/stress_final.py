"""Independent small-input models for the final archive expansion."""
from collections import deque
from functools import lru_cache
from itertools import combinations, permutations, product


def line(values):
    return ' '.join(map(str, values))


def monge(rng):
    h, w = rng.randint(2, 6), rng.randint(2, 6)
    a = [[100-i*j for j in range(w)] for i in range(h)]
    if rng.randrange(2):
        a[rng.randrange(h)][rng.randrange(w)] += rng.randint(1, 30)
    valid = all(a[i][j]+a[k][l] <= a[k][j]+a[i][l]
                for i, k in combinations(range(h), 2)
                for j, l in combinations(range(w), 2))
    return f'{h} {w}\n'+'\n'.join(map(line, a))+'\n', 'Yes' if valid else 'No'


def signed_division(rng, ceiling=False):
    x = rng.choice([rng.randint(-10**18, 10**18), -10**18, 10**18, -1, 0, 1])
    return str(x)+'\n', str(-((-x)//10) if ceiling else x//10)


def admissions(rng):
    n = rng.randint(1, 12)
    counts, remaining = [], n
    for _ in range(3):
        count = rng.randint(0, remaining)
        counts.append(count)
        remaining -= count
    if not any(counts):
        counts[0] = 1
    a, b = [[rng.randint(0, 5) for _ in range(n)] for _ in range(2)]
    unchosen, chosen = set(range(n)), set()
    for count, scores in zip(counts, (a, b, [x+y for x, y in zip(a, b)])):
        for _ in range(count):
            winner = max(unchosen, key=lambda i: (scores[i], -i))
            chosen.add(winner+1)
            unchosen.remove(winner)
    return line([n, *counts])+'\n'+line(a)+'\n'+line(b)+'\n', line(sorted(chosen))


def hammer(rng):
    x, y, z = rng.sample([i for i in range(-8, 9) if i], 3)
    queue = deque([(0, False, 0)])
    seen = {(0, False)}
    answer = -1
    while queue:
        position, armed, distance = queue.popleft()
        if position == x:
            answer = distance
            break
        for next_position in (position-1, position+1):
            if not -9 <= next_position <= 9 or (next_position == y and not armed):
                continue
            state = (next_position, armed or next_position == z)
            if state not in seen:
                seen.add(state)
                queue.append((*state, distance+1))
    return line((x, y, z))+'\n', str(answer)


def rounding(rng):
    x, k = rng.randint(0, 10**15-1), rng.randint(1, 15)
    original = x
    # Decimal digit removal and carry, rather than the solution's division formula.
    for digits in range(1, k+1):
        text = str(x).zfill(digits+1)
        prefix = int(text[:-digits]) + (text[-digits] >= '5')
        x = int(str(prefix)+'0'*digits)
    return f'{original} {k}\n', str(x)


def modular_products(rng):
    a = [rng.randint(0, 10**18) for _ in range(3)]
    b = [rng.randint(0, 10**18) for _ in range(3)]
    pa, pb = a[0]*a[1]*a[2], b[0]*b[1]*b[2]
    if pa < pb:
        a, b, pa, pb = b, a, pb, pa
    return line(a+b)+'\n', str((pa-pb) % 998244353)


def confusing_time(rng):
    h, m = rng.randrange(24), rng.randrange(60)
    valid = []
    for hour in range(24):
        for minute in range(60):
            digits = f'{hour:02d}{minute:02d}'
            if int(digits[0]+digits[2]) < 24 and int(digits[1]+digits[3]) < 60:
                valid.append(hour*60+minute)
    answer = min(valid, key=lambda t: (t-h*60-m) % 1440)
    return f'{h} {m}\n', f'{answer//60} {answer%60}'


def rotation(rng):
    n = rng.randint(1, 6)
    a = [[rng.randrange(2) for _ in range(n)] for _ in range(n)]
    b = [[rng.randrange(2) for _ in range(n)] for _ in range(n)]
    points = {(i, j) for i in range(n) for j in range(n) if a[i][j]}
    target = {(i, j) for i in range(n) for j in range(n) if b[i][j]}
    transforms = [lambda i,j:(i,j), lambda i,j:(j,n-1-i),
                  lambda i,j:(n-1-i,n-1-j), lambda i,j:(n-1-j,i)]
    valid = any({transform(i,j) for i,j in points} <= target for transform in transforms)
    return str(n)+'\n'+'\n'.join(map(line, a+b))+'\n', 'Yes' if valid else 'No'


def superior(rng):
    n, m = rng.randint(2, 8), rng.randint(1, 8)
    prices = [rng.randint(1, 8) for _ in range(n)]
    features = [set(rng.sample(range(1, m+1), rng.randint(1, m))) for _ in range(n)]
    valid = any(prices[j] <= prices[i] and features[i] <= features[j]
                and (prices[j] < prices[i] or features[i] < features[j])
                for i in range(n) for j in range(n))
    rows = [f'{n} {m}']+[line([prices[i], len(features[i]), *sorted(features[i])]) for i in range(n)]
    return '\n'.join(rows)+'\n', 'Yes' if valid else 'No'


def strongest(rng):
    n = rng.randint(2, 6)
    order = rng.sample(range(n), n)
    edges = [(order[i], order[j]) for i in range(n) for j in range(i+1, n) if rng.randrange(3)==0]
    possible = set()
    for ranking in permutations(range(n)):
        position = {v:i for i,v in enumerate(ranking)}
        if all(position[a] < position[b] for a,b in edges):
            possible.add(ranking[0]+1)
    rows = [f'{n} {len(edges)}']+[f'{a+1} {b+1}' for a,b in edges]
    return '\n'.join(rows)+'\n', str(next(iter(possible)) if len(possible)==1 else -1)


def self_power(rng):
    a = rng.randint(1, 15)
    b = a**a if rng.randrange(2) else rng.randint(1, 10**18)
    return str(b)+'\n', str(next((i for i in range(1, 20) if i**i==b), -1))


def eggs(rng):
    n = rng.randint(1, 100)
    prices = [rng.randint(1, 100) for _ in range(3)]
    costs = [0]+[10**9]*(n+11)
    for count in range(1, n+12):
        costs[count] = min((costs[count-pack]+price for pack,price in zip((6,8,12),prices)
                            if count>=pack), default=10**9)
    return line([n, *prices])+'\n', str(min(costs[n:]))


def trees(rng):
    a = rng.choice([rng.randint(-30, 30), -10**18, 10**18])
    left = rng.choice([rng.randint(-40, 40), -10**18, 10**18-40])
    right, gap = left+rng.randint(0, 40), rng.randint(1, 20)
    answer = sum((position-a) % gap == 0 for position in range(left, right+1))
    return line((a, gap, left, right))+'\n', str(answer)


def exchange(rng):
    n = rng.randint(2, 4)
    initial = tuple(rng.randint(0, 3) for _ in range(n))
    s = [rng.randint(1, 3) for _ in range(n-1)]
    t = [rng.randint(1, value) for value in s]
    @lru_cache(None)
    def search(state):
        best = state[-1]
        for i in range(n-1):
            if state[i] >= s[i]:
                next_state = list(state)
                next_state[i] -= s[i]
                next_state[i+1] += t[i]
                best = max(best, search(tuple(next_state)))
        return best
    rows = [str(n), line(initial)]+[f'{a} {b}' for a,b in zip(s,t)]
    return '\n'.join(rows)+'\n', str(search(initial))


def typing(rng):
    intended = ''.join(rng.choice('abc') for _ in range(rng.randint(1, 30)))
    typed, positions = '', []
    for char in intended:
        wrong = [letter for letter in 'abc' if letter != char]
        typed += ''.join(rng.choice(wrong) for _ in range(rng.randrange(5)))+char
        positions.append(len(typed))
    return intended+'\n'+typed+'\n', line(positions)


def cuboids(rng):
    boxes, cells = [], []
    for _ in range(2):
        bounds = [sorted(rng.sample(range(7), 2)) for _ in range(3)]
        boxes.append([a for a,b in bounds]+[b for a,b in bounds])
        cells.append(set(product(*(range(a,b) for a,b in bounds))))
    return '\n'.join(map(line, boxes))+'\n', 'Yes' if cells[0] & cells[1] else 'No'


def triangle(rng):
    while True:
        points = rng.sample(list(product(range(-5, 6), repeat=2)), 3)
        a,b,c = points
        if (b[0]-a[0])*(c[1]-a[1]) != (b[1]-a[1])*(c[0]-a[0]):
            break
    right = any((b[0]-a[0])*(c[0]-a[0])+(b[1]-a[1])*(c[1]-a[1]) == 0
                for a,b,c in permutations(points))
    return '\n'.join(map(line, points))+'\n', 'Yes' if right else 'No'


def hair(rng):
    n, target = rng.randint(1, 12), rng.randint(1, 30)
    p = rng.randint(1, n)
    lengths = [rng.randint(1, 30) for _ in range(n)]
    day = next(d for d in range(31) if sum(x+d>=target for x in lengths)>=p)
    return f'{n} {target} {p}\n'+line(lengths)+'\n', str(day)


def decrease(rng):
    values = [rng.randint(1, 6) for _ in range(rng.randint(2, 5))]
    @lru_cache(None)
    def maximum_operations(state):
        best = 0
        for i,j in combinations(range(len(state)), 2):
            if state[i] and state[j]:
                next_state = list(state)
                next_state[i] -= 1
                next_state[j] -= 1
                best = max(best, 1+maximum_operations(tuple(sorted(next_state))))
        return best
    return str(len(values))+'\n'+line(values)+'\n', str(maximum_operations(tuple(sorted(values))))


GENERATORS = {
    'atcoder-abc224_b': monge, 'atcoder-abc239_b': signed_division,
    'atcoder-abc260_b': admissions, 'atcoder-abc270_b': hammer,
    'atcoder-abc273_b': rounding, 'atcoder-abc275_b': modular_products,
    'atcoder-abc278_b': confusing_time, 'atcoder-abc298_b': rotation,
    'atcoder-abc310_b': superior, 'atcoder-abc313_b': strongest,
    'atcoder-abc327_b': self_power, 'atcoder-abc331_b': eggs,
    'atcoder-abc334_b': trees, 'atcoder-abc341_b': exchange,
    'atcoder-abc345_b': lambda r: signed_division(r, True),
    'atcoder-abc352_b': typing, 'atcoder-abc361_b': cuboids,
    'atcoder-abc362_b': triangle, 'atcoder-abc363_b': hair,
    'atcoder-abc368_b': decrease,
}
