// Insomnia cure | https://codeforces.com/problemset/problem/148/A
// Time: O(d); extra space: O(1).
#include <iostream>



void solve() {
    int k, l, m, n, dragons;
    std::cin >> k >> l >> m >> n >> dragons;
    int harmed = 0;
    for (int i = 1; i <= dragons; ++i)
        harmed += i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0;
    std::cout << harmed << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
