// Young Physicist | https://codeforces.com/problemset/problem/69/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, x = 0, y = 0, z = 0;
    std::cin >> n;
    while (n-- > 0) { int a,b,c; std::cin >> a >> b >> c; x += a; y += b; z += c; }
    std::cout << (x == 0 && y == 0 && z == 0 ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
