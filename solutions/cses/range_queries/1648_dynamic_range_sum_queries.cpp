// Dynamic Range Sum Queries | https://cses.fi/problemset/task/1648/
// Time: O((n + q) log n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<long long> values(n + 1), tree(n + 1);
    auto add = [&](int index, long long delta) {
        for (; index <= n; index += index & -index) tree[index] += delta;
    };
    auto prefix = [&](int index) {
        long long answer = 0;
        for (; index > 0; index -= index & -index) answer += tree[index];
        return answer;
    };
    for (int i = 1; i <= n; ++i) { std::cin >> values[i]; add(i, values[i]); }
    while (q--) {
        int type, a; long long b;
        std::cin >> type >> a >> b;
        if (type == 1) { add(a, b - values[a]); values[a] = b; }
        else std::cout << prefix(static_cast<int>(b)) - prefix(a - 1) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
