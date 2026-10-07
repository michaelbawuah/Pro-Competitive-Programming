// Bit Strings | https://cses.fi/problemset/task/1617/
// Time: O(log n); extra space: O(1).
#include <iostream>



void solve() {
    long long n, answer = 1, base = 2;
    constexpr long long mod = 1000000007;
    std::cin >> n;
    while (n > 0) {
        if (n & 1LL) answer = answer * base % mod;
        base = base * base % mod;
        n >>= 1;
    }
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
