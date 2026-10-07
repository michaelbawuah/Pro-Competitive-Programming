// Increasing Array | https://cses.fi/problemset/task/1094/
// Time: O(n); extra space: O(1).
#include <iostream>
#include <algorithm>



void solve() {
    int n;
    std::cin >> n;
    long long previous = 0, moves = 0;
    for (int i = 0; i < n; ++i) {
        long long value;
        std::cin >> value;
        if (value < previous) moves += previous - value;
        previous = std::max(previous, value);
    }
    std::cout << moves << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
