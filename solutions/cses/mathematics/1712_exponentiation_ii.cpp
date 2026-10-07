// Exponentiation II | https://cses.fi/problemset/task/1712/
// Time: O(q (log(c + 1) + log MOD)); extra space: O(1).
#include <iostream>

long long power(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base %= modulus;
    while (exponent > 0) {
        if (exponent & 1LL) result = result * base % modulus;
        base = base * base % modulus;
        exponent >>= 1;
    }
    return result;
}

void solve() {
    int queries;
    std::cin >> queries;
    constexpr long long modulus = 1000000007;
    while (queries-- > 0) {
        long long a, b, c;
        std::cin >> a >> b >> c;
        if (a == 0) {
            const bool zero_exponent = b == 0 && c > 0;
            std::cout << (zero_exponent ? 1 : 0) << '\n';
        } else {
            const long long exponent = power(b, c, modulus - 1);
            std::cout << power(a, exponent, modulus) << '\n';
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
