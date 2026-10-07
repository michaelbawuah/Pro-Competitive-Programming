// Elephant | https://codeforces.com/problemset/problem/617/A
// Time: O(1); extra space: O(1).
#include <iostream>



void solve() {
    int distance;
    std::cin >> distance;
    std::cout << (distance + 4) / 5 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
