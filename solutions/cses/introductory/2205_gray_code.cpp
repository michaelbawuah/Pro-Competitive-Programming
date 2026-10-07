// Gray Code | https://cses.fi/problemset/task/2205/
// Time: O(n * 2^n); extra space: O(1).
#include <iostream>



void solve() {
    int n; std::cin >> n;
    for (int value = 0; value < (1 << n); ++value) {
        int gray = value ^ (value >> 1);
        for (int bit = n - 1; bit >= 0; --bit) std::cout << ((gray >> bit) & 1);
        std::cout << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
