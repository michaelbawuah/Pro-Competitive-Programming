"""Small independent oracles for the 300-problem expansion."""
from collections import deque
from functools import lru_cache
from itertools import combinations, product


def line(values):
    return ' '.join(map(str, values))


def subarrays(rng, kind):
    n = rng.randint(1, 10)
    values = [rng.randint(1, 8) if kind == 'positive' else rng.randint(-8, 8) for _ in range(n)]
    header = str(n)
    if kind == 'positive':
        target = rng.randint(1, 25)
        header += f' {target}'
        answer = sum(sum(values[i:j]) == target for i in range(n) for j in range(i+1, n+1))
    elif kind == 'divisible':
        answer = sum(sum(values[i:j]) % n == 0 for i in range(n) for j in range(i+1, n+1))
    elif kind == 'distinct':
        values = [abs(x)+1 for x in values]
        k = rng.randint(1, n)
        header += f' {k}'
        answer = sum(len(set(values[i:j])) <= k for i in range(n) for j in range(i+1, n+1))
    else:
        a, b = sorted((rng.randint(1, n), rng.randint(1, n)))
        header += f' {a} {b}'
        answer = max(sum(values[i:j]) for i in range(n) for j in range(i+a, min(n, i+b)+1))
    return f'{header}\n{line(values)}\n', str(answer)


def division(rng):
    n = rng.randint(1, 9)
    k = rng.randint(1, n)
    values = [rng.randint(1, 15) for _ in range(n)]
    answer = min(max(sum(values[a:b]) for a, b in zip((0,)+cuts, cuts+(n,)))
                 for cuts in combinations(range(1, n), k-1))
    return f'{n} {k}\n{line(values)}\n', str(answer)


def multi_movies(rng):
    n = rng.randint(1, 9)
    k = rng.randint(1, min(n, 3))
    movies = [(s, s+rng.randint(1, 6)) for s in (rng.randint(1, 9) for _ in range(n))]
    answer = 0
    for mask in range(1 << n):
        chosen = [movies[i] for i in range(n) if mask >> i & 1]
        # Half-open overlap at all integer times decides whether k viewers suffice.
        if all(sum(a <= t < b for a, b in chosen) <= k for t in range(16)):
            answer = max(answer, len(chosen))
    return f'{n} {k}\n' + ''.join(f'{a} {b}\n' for a,b in movies), str(answer)


def salaries(rng):
    n, q = rng.randint(1, 10), 25
    values = [rng.randint(1, 20) for _ in range(n)]
    lines = [f'{n} {q}', line(values)]
    answers = []
    for _ in range(q):
        if rng.randrange(2):
            i, v = rng.randrange(n), rng.randint(1, 30)
            lines.append(f'! {i+1} {v}')
            values[i] = v
        else:
            a,b = sorted((rng.randint(1, 30), rng.randint(1, 30)))
            lines.append(f'? {a} {b}')
            answers.append(sum(a <= v <= b for v in values))
    return '\n'.join(lines)+'\n', line(answers)


def forest(rng):
    n, q = rng.randint(1, 8), 20
    grid = [''.join(rng.choice('.*') for _ in range(n)) for _ in range(n)]
    lines = [f'{n} {q}', *grid]
    answers = []
    for _ in range(q):
        y1,y2 = sorted((rng.randrange(n),rng.randrange(n)))
        x1,x2 = sorted((rng.randrange(n),rng.randrange(n)))
        lines.append(f'{y1+1} {x1+1} {y2+1} {x2+1}')
        answers.append(sum(grid[y][x]=='*' for y in range(y1,y2+1) for x in range(x1,x2+1)))
    return '\n'.join(lines)+'\n', line(answers)


def minimum(rng):
    n, q = rng.randint(1, 25), 20
    values = [rng.randint(1, 100) for _ in range(n)]
    lines = [f'{n} {q}', line(values)]
    answers=[]
    for _ in range(q):
        a,b=sorted((rng.randrange(n),rng.randrange(n)))
        lines.append(f'{a+1} {b+1}')
        answers.append(min(values[a:b+1]))
    return '\n'.join(lines)+'\n', line(answers)


def hotels(rng):
    n, m = rng.randint(1, 12), 20
    rooms = [rng.randint(1, 20) for _ in range(n)]
    groups = [rng.randint(1, 22) for _ in range(m)]
    source = f'{n} {m}\n{line(rooms)}\n{line(groups)}\n'
    answer=[]
    for group in groups:
        hotel=next((i for i,free in enumerate(rooms) if free>=group),None)
        answer.append(0 if hotel is None else hotel+1)
        if hotel is not None:
            rooms[hotel]-=group
    return source,line(answer)


def removals(rng):
    n=rng.randint(1,20)
    values=[rng.randint(1,100) for _ in range(n)]
    source=f'{n}\n{line(values)}\n'
    ranks,answer=[],[]
    while values:
        rank=rng.randrange(len(values))
        ranks.append(rank+1)
        answer.append(values.pop(rank))
    return source+line(ranks)+'\n',line(answer)


def tree(rng, kind):
    n=rng.randint(1,16)
    parents=[-1]+[rng.randrange(i) for i in range(1,n)]
    edges=[(i,parents[i]) for i in range(1,n)]
    rng.shuffle(edges)
    adj=[[] for _ in range(n)]
    for a,b in edges:
        adj[a].append(b)
        adj[b].append(a)
    def distances(start):
        ds=[-1]*n
        ds[start]=0
        queue=deque([start])
        while queue:
            v=queue.popleft()
            for u in adj[v]:
                if ds[u]<0:
                    ds[u]=ds[v]+1
                    queue.append(u)
        return ds
    edge_text=''.join(f'{a+1} {b+1}\n' for a,b in edges)
    if kind=='sums':
        return f'{n}\n'+edge_text,line(sum(distances(v)) for v in range(n))
    q=25
    lines=[f'{n} {q}']
    if kind=='lca':
        lines.append(line(p+1 for p in parents[1:]))
    else:
        lines.append(edge_text.rstrip())
    answers=[]
    for _ in range(q):
        a,b=rng.randrange(n),rng.randrange(n)
        lines.append(f'{a+1} {b+1}')
        if kind=='distances':
            answers.append(distances(a)[b])
        else:
            ancestors=set()
            while a!=-1:
                ancestors.add(a)
                a=parents[a]
            while b not in ancestors:
                b=parents[b]
            answers.append(b+1)
    return '\n'.join(lines)+'\n',line(answers)


def subtree(rng):
    n,q=rng.randint(1,15),25
    values=[rng.randint(1,30) for _ in range(n)]
    parent=[-1]+[rng.randrange(i) for i in range(1,n)]
    children=[[] for _ in range(n)]
    for i in range(1,n):
        children[parent[i]].append(i)
    lines=[f'{n} {q}',line(values)]
    lines.extend(f'{i+1} {parent[i]+1}' for i in range(1,n))
    answers=[]
    for _ in range(q):
        v=rng.randrange(n)
        if rng.randrange(2):
            x=rng.randint(1,50)
            lines.append(f'1 {v+1} {x}')
            values[v]=x
        else:
            lines.append(f'2 {v+1}')
            pending=[v]
            total=0
            while pending:
                u=pending.pop()
                total+=values[u]
                pending.extend(children[u])
            answers.append(total)
    return '\n'.join(lines)+'\n',line(answers)


def game(rng):
    a=tuple(rng.randint(-10,15) for _ in range(rng.randint(1,10)))
    @lru_cache(None)
    def play(values, first):
        if not values:
            return 0
        left=play(values[1:],not first)+(values[0] if first else 0)
        right=play(values[:-1],not first)+(values[-1] if first else 0)
        return max(left,right) if first else min(left,right)
    return f'{len(a)}\n{line(a)}\n',str(play(a,True))


def elevator(rng):
    n,cap=rng.randint(1,8),rng.randint(1,15)
    weights=sorted([rng.randint(1,cap) for _ in range(n)],reverse=True)
    best=n
    def place(i,loads):
        nonlocal best
        if len(loads)>=best:
            return
        if i==n:
            best=len(loads)
            return
        seen=set()
        for j,load in enumerate(loads):
            if load not in seen and load+weights[i]<=cap:
                seen.add(load)
                loads[j]+=weights[i]
                place(i+1,loads)
                loads[j]-=weights[i]
        place(i+1,loads+[weights[i]])
    place(0,[])
    return f'{n} {cap}\n{line(weights)}\n',str(best)


def tilings(rng):
    n,m=rng.randint(1,4),rng.randint(1,5)
    full=(1<<(n*m))-1
    @lru_cache(None)
    def fill(mask):
        if mask==full:
            return 1
        i=next(i for i in range(n*m) if not mask>>i&1)
        r,c=divmod(i,m)
        total=0
        for nr,nc in ((r+1,c),(r,c+1)):
            j=nr*m+nc
            if nr<n and nc<m and not mask>>j&1:
                total+=fill(mask|(1<<i)|(1<<j))
        return total
    return f'{n} {m}\n',str(fill(0))


def towers(rng):
    n=rng.randint(1,5)
    full=(1<<(2*n))-1
    @lru_cache(None)
    def tile(mask):
        if mask==full:
            return 1
        first=next(i for i in range(2*n) if not mask>>i&1)
        row,col=divmod(first,2)
        total=0
        # Enumerate arbitrary rectangles, independently of the two-state recurrence.
        for h in range(1,n-row+1):
            for w in range(1,3-col):
                bits=sum(1<<(r*2+c) for r in range(row,row+h) for c in range(col,col+w))
                if mask&bits==0:
                    total+=tile(mask|bits)
        return total
    return f'1\n{n}\n',str(tile(0))


def fibonacci(rng):
    n=rng.randint(0,1000)
    a,b=0,1
    for _ in range(n):
        a,b=b,(a+b)%1000000007
    return f'{n}\n',str(a)


def all_green(rng):
    d=rng.randint(1,4)
    groups=[(rng.randint(1,4),rng.randint(1,6)*100) for _ in range(d)]
    maximum=sum(p*100*(i+1)+c for i,(p,c) in enumerate(groups))
    target=rng.randint(1,maximum//100)*100
    answer=10**9
    for counts in product(*(range(p+1) for p,_ in groups)):
        score=sum(k*100*(i+1)+(c if k==p else 0) for i,(k,(p,c)) in enumerate(zip(counts,groups)))
        if score>=target:
            answer=min(answer,sum(counts))
    return f'{d} {target}\n'+''.join(f'{p} {c}\n' for p,c in groups),str(answer)


def stairs(rng):
    values=[rng.randint(1,8) for _ in range(rng.randint(1,8))]
    possible=any(all(a<=b for a,b in zip(candidate,candidate[1:]))
                 for candidate in product(*((x-1,x) for x in values)))
    return f'{len(values)}\n{line(values)}\n','Yes' if possible else 'No'


GENERATORS={
    'cses-1660':lambda r:subarrays(r,'positive'),
    'cses-1662':lambda r:subarrays(r,'divisible'),
    'cses-2428':lambda r:subarrays(r,'distinct'),
    'cses-1085':division,
    'cses-1644':lambda r:subarrays(r,'maximum'),
    'cses-1632':multi_movies,
    'cses-1144':salaries,
    'cses-1652':forest,
    'cses-1647':minimum,
    'cses-1143':hotels,
    'cses-1749':removals,
    'cses-1133':lambda r:tree(r,'sums'),
    'cses-1135':lambda r:tree(r,'distances'),
    'cses-1688':lambda r:tree(r,'lca'),
    'cses-1137':subtree,
    'cses-2413':towers,
    'cses-1097':game,
    'cses-1653':elevator,
    'cses-2181':tilings,
    'cses-1722':fibonacci,
    'atcoder-abc104_c':all_green,
    'atcoder-abc136_c':stairs,
}
