// Maximum Subarray Sum | https://cses.fi/problemset/task/1643/
// Time: O(n); extra space: O(1).
#include <iostream>
#include <algorithm>



void solve() {
    int n;
    long long current;
    std::cin >> n >> current;
    long long best = current;
    for (int i = 1; i < n; ++i) {
        long long value;
        std::cin >> value;
        current = std::max(value, current + value);
        best = std::max(best, current);
    }
    std::cout << best << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
