// Permutations | https://cses.fi/problemset/task/1070/
// Time: O(n); extra space: O(1).
#include <iostream>



void solve() {
    int n; std::cin >> n;
    if (n == 2 || n == 3) { std::cout << "NO SOLUTION\n"; return; }
    for (int i = 2; i <= n; i += 2) std::cout << i << ' ';
    for (int i = 1; i <= n; i += 2) std::cout << i << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
