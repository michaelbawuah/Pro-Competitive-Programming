// Two Knights | https://cses.fi/problemset/task/1072/
// Time: O(n); extra space: O(1).
#include <iostream>



void solve() {
    long long n; std::cin >> n;
    for (long long k = 1; k <= n; ++k) {
        long long squares = k * k;
        long long attacks = k >= 3 ? 4 * (k - 1) * (k - 2) : 0;
        std::cout << squares * (squares - 1) / 2 - attacks << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
