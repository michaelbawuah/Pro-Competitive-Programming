// Domino Piling | https://codeforces.com/problemset/problem/50/A
// Time: O(1); extra space: O(1).
#include <iostream>



void solve() {
    int rows, columns;
    std::cin >> rows >> columns;
    std::cout << rows * columns / 2 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
