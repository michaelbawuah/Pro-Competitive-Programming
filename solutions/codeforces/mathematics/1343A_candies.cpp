// Candies | https://codeforces.com/problemset/problem/1343/A
// Time: O(log n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n;
        for (long long denominator = 3; denominator <= n; denominator = denominator * 2 + 1)
            if (n % denominator == 0) { std::cout << n / denominator << '\n'; break; }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
