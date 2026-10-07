// Range Update Queries | https://cses.fi/problemset/task/1651/
// Time: O(n + q log n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n, queries;
    std::cin >> n >> queries;
    std::vector<long long> original(n + 1), tree(n + 1);
    for (int i = 1; i <= n; ++i) std::cin >> original[i];
    const auto add = [&](int index, long long delta) {
        for (; index <= n; index += index & -index) tree[index] += delta;
    };
    while (queries-- > 0) {
        int type;
        std::cin >> type;
        if (type == 1) {
            int left, right;
            long long delta;
            std::cin >> left >> right >> delta;
            add(left, delta);
            add(right + 1, -delta);
        } else {
            int index;
            std::cin >> index;
            long long answer = original[index];
            for (int current = index; current > 0; current -= current & -current) answer += tree[current];
            std::cout << answer << '\n';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
