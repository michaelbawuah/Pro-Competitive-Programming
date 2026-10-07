// Coin Piles | https://cses.fi/problemset/task/1754/
// Time: O(q); extra space: O(1).
#include <iostream>
#include <algorithm>



void solve() {
    int tests; std::cin >> tests;
    while (tests--) {
        long long a, b; std::cin >> a >> b;
        bool possible = (a + b) % 3 == 0 && std::max(a, b) <= 2 * std::min(a, b);
        std::cout << (possible ? "YES\n" : "NO\n");
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
