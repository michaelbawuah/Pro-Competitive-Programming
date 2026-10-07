// Stones on the Table | https://codeforces.com/problemset/problem/266/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::string colors;
    std::cin >> n >> colors;
    int removed = 0;
    for (int i = 1; i < n; ++i) removed += colors[i] == colors[i - 1];
    std::cout << removed << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
