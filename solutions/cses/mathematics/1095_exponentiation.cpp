// Exponentiation | https://cses.fi/problemset/task/1095/
// Time: O(q log(b + 1)); extra space: O(1).
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
    while (queries-- > 0) {
        long long base, exponent;
        std::cin >> base >> exponent;
        std::cout << power(base, exponent, 1000000007) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
