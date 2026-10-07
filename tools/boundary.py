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
