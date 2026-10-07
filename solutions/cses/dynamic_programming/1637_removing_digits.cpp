// Removing Digits | https://cses.fi/problemset/task/1637/
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> best(n + 1, n + 1);
    best[0] = 0;
    for (int value = 1; value <= n; ++value) {
        for (int digits = value; digits > 0; digits /= 10) {
            const int digit = digits % 10;
            if (digit != 0) best[value] = std::min(best[value], best[value - digit] + 1);
        }
    }
    std::cout << best[n] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
