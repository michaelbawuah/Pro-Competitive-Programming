// Trailing Zeros | https://cses.fi/problemset/task/1618/
// Time: O(log n); extra space: O(1).
#include <iostream>



void solve() {
    long long n, zeros = 0;
    std::cin >> n;
    while (n > 0) {
        n /= 5;
        zeros += n;
    }
    std::cout << zeros << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
