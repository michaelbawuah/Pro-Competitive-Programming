// Static Range Sum Queries | https://cses.fi/problemset/task/1646/
// Time: O(n + q); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n, q;
    std::cin >> n >> q;
    std::vector<long long> prefix(n + 1);
    for (int i = 1; i <= n; ++i) {
        long long value; std::cin >> value;
        prefix[i] = prefix[i - 1] + value;
    }
    while (q--) {
        int left, right; std::cin >> left >> right;
        std::cout << prefix[right] - prefix[left - 1] << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
