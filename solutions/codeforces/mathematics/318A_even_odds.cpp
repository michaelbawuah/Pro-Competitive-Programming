// Even Odds | https://codeforces.com/problemset/problem/318/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n, k;
    std::cin >> n >> k;
    const long long odds = (n + 1) / 2;
    std::cout << (k <= odds ? 2 * k - 1 : 2 * (k - odds)) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
