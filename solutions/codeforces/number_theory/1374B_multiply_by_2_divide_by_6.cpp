// Multiply by 2, divide by 6 | https://codeforces.com/problemset/problem/1374/B
// Time: O(log n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n, twos = 0, threes = 0;
        std::cin >> n;
        while (n % 2 == 0) { n /= 2; ++twos; }
        while (n % 3 == 0) { n /= 3; ++threes; }
        std::cout << (n != 1 || twos > threes ? -1 : 2 * threes - twos) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
