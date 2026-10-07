// Watermelon | https://codeforces.com/problemset/problem/4/A
// Time: O(1); extra space: O(1).
#include <iostream>



void solve() {
    int weight;
    std::cin >> weight;
    std::cout << (weight > 2 && weight % 2 == 0 ? "YES\n" : "NO\n");
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
