// Dynamic Range Minimum Queries | https://cses.fi/problemset/task/1649/
// Time: O(n + q log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>



void solve() {
    int n, q;
    std::cin >> n >> q;
    int base = 1;
    while (base < n) base *= 2;
    std::vector<long long> tree(2 * base, std::numeric_limits<long long>::max());
    for (int i = 0; i < n; ++i) std::cin >> tree[base + i];
    for (int i = base - 1; i > 0; --i) tree[i] = std::min(tree[2 * i], tree[2 * i + 1]);
    while (q--) {
        int type, a; long long b;
        std::cin >> type >> a >> b;
        if (type == 1) {
            int node = base + a - 1;
            tree[node] = b;
            while (node > 1) { node /= 2; tree[node] = std::min(tree[2 * node], tree[2 * node + 1]); }
        } else {
            int left = base + a - 1, right = base + static_cast<int>(b);
            long long answer = std::numeric_limits<long long>::max();
            while (left < right) {
                if (left & 1) answer = std::min(answer, tree[left++]);
                if (right & 1) answer = std::min(answer, tree[--right]);
                left /= 2; right /= 2;
            }
            std::cout << answer << '\n';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
