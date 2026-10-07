"""Generated constraint-limit regressions without checking large input files into git."""
import cp


def digit_at(position):
    def digits_through(value):
        total, start, width = 0, 1, 1
        while start <= value:
            total += (min(value, start * 10 - 1) - start + 1) * width
            start *= 10
            width += 1
        return total
    low, high = 1, position
    while low < high:
        middle = (low + high) // 2
        if digits_through(middle) >= position:
            high = middle
        else:
            low = middle + 1
    return str(low)[position - digits_through(low - 1) - 1]


def cases():
    positions = [1, 9, 10, 189, 190, 2889, 2890, 10**18 - 1, 10**18]
    yield 'cses-2431', '18-digit positions', f'{len(positions)}\n' + '\n'.join(map(str, positions)) + '\n', '\n'.join(map(digit_at, positions))
    yield 'cses-1071', 'billionth spiral layer', '2\n1000000000 1\n1 1000000000\n', '1000000000000000000\n999999998000000002\n'
    n = 200000
    parents = ' '.join(map(str, range(1, n)))
    yield 'cses-1674', '200000-employee chain', f'{n}\n{parents}\n', ' '.join(map(str, range(n - 1, -1, -1)))
    edges = ''.join(f'{i} {i+1}\n' for i in range(1, n))
    yield 'cses-1132', '200000-vertex chain', f'{n}\n{edges}', ' '.join(str(max(i, n - i - 1)) for i in range(n))
    yield 'cses-1687', 'highest ancestor bits', f'{n} 3\n{parents}\n{n} {n-1}\n{n} {n}\n{n} 131072\n', '1\n-1\n68928\n'
    dag_size = 100000
    yield 'atcoder-dp_g', '100000-vertex DAG chain', f'{dag_size} {dag_size-1}\n' + ''.join(f'{i} {i+1}\n' for i in range(1, dag_size)), str(dag_size - 1)
    updates = 199999
    yield 'cses-1651', '64-bit accumulated updates', f'1 {updates+1}\n1000000000\n' + '1 1 1 1000000000\n' * updates + '2 1\n', str((updates + 1) * 10**9)
    yield 'atcoder-dp_i', '2999 fair coins', '2999\n' + ' '.join(['0.50'] * 2999) + '\n', '0.5'
    yield 'atcoder-dp_f', '3000-character LCS', 'a' * 3000 + '\n' + 'a' * 3000 + '\n', 'a' * 3000
    yield 'atcoder-dp_e', 'large infeasible weight sums', '100 1000000000\n' + '1000000000 1000\n' * 100, '1000'
    yield 'cses-1746', '100000 fixed values', '100000 100\n' + ' '.join(['50'] * 100000) + '\n', '1'

    yield 'cses-1133', '200000-vertex rerooting chain', f'{n}\n{edges}', ' '.join(str(i*(i+1)//2+(n-i-1)*(n-i)//2) for i in range(n))
    yield 'cses-1135', 'deep distance queries', f'{n} 3\n{edges}1 {n}\n{n} {n}\n50000 150000\n', f'{n-1}\n0\n100000\n'
    yield 'cses-1688', 'deep lowest common ancestors', f'{n} 3\n{parents}\n{n} {n-1}\n1 {n}\n131072 150000\n', f'{n-1}\n1\n131072\n'
    yield 'cses-1137', 'subtree sums exceed 32 bits', f'{n} 3\n' + ' '.join(['1000000000']*n) + f'\n{edges}2 1\n1 {n} 1\n2 1\n', f'{n*10**9}\n{(n-1)*10**9+1}\n'
    yield 'cses-1662', 'all subarrays divisible', f'{n}\n' + ' '.join(['0']*n) + '\n', str(n*(n+1)//2)
    yield 'cses-1085', '64-bit partition search', f'{n} 1\n' + ' '.join(['1000000000']*n) + '\n', str(n*10**9)
    yield 'cses-1097', '5000-value interval game', '5000\n' + ' '.join(['1000000000']*5000) + '\n', str(2500*10**9)
    yield 'cses-1653', 'full 20-person subset space', '20 1000000000\n' + ' '.join(['1000000000']*20) + '\n', '20'
    a,b=0,1
    for _ in range(1001):
        a,b=b,(a+b)%1000000007
    yield 'cses-2181', '1000-column domino board', '2 1000\n', str(a)
    yield 'atcoder-abc131_c', '18-digit inclusion-exclusion bounds', '1 1000000000000000000 2 4\n', '500000000000000000'

    yield 'atcoder-abc334_b', 'signed extreme endpoints', '1000000000000000000 1 -1000000000000000000 1000000000000000000\n', '2000000000000000001'
    yield 'atcoder-abc341_b', '200000-country accumulated currency', f'{n}\n'+' '.join(['1000000000']*n)+'\n'+'1 1\n'*(n-1), str(n*10**9)
    yield 'atcoder-abc306_b', 'unsigned high bit', ' '.join(['0']*63+['1'])+'\n', str(2**63)
    yield 'atcoder-abc258_b', 'ten-digit toroidal path', '10\n'+('9'*10+'\n')*10, '9999999999'
    yield 'atcoder-abc273_b', 'fifteen-place rounding carry', '999999999999999 15\n', '1000000000000000'
    yield 'atcoder-abc275_b', 'product exceeds machine integers', '1000000000000000000 1000000000000000000 1000000000000000000 0 0 0\n', str((10**18)**3 % 998244353)
    yield 'atcoder-abc285_b', '5000-character shifted comparisons', '5000\n'+'a'*2500+'b'*2500+'\n', '\n'.join(str(0 if shift<2500 else 5000-shift) for shift in range(1,5000))
    yield 'atcoder-abc224_b', 'large Monge entries', '50 50\n'+'\n'.join(' '.join(str(10**9-i*j) for j in range(50)) for i in range(50))+'\n', 'Yes'
    yield 'atcoder-abc368_b', 'maximum heap simulation length', '100\n'+' '.join(['100']*100)+'\n', '5000'
    yield 'atcoder-abc226_b', '200000 distinct variable-length keys', f'{n}\n'+''.join(f'1 {i}\n' for i in range(n)), str(n)



def run():
    count = 0
    for key, name, input_text, expected in cases():
        problem = cp.find_problem(key)
        binary = cp.compile_source(cp.ROOT / problem['solution'])
        actual = cp.run_binary(binary, input_text)
        if problem.get('checker') == 'probability':
            valid = cp.validate(problem, {'input': input_text, 'output': expected}, actual)
        else:
            # These limit cases have unique known outputs, including the all-'a' LCS.
            valid = actual.split() == expected.split()
        if not valid:
            raise ValueError(f'{key}: failed boundary case {name}')
        print(f'PASS boundary {key}: {name}', flush=True)
        count += 1
    print(f'PASS boundary total: {count} generated constraint-limit cases')


if __name__ == '__main__':
    run()
