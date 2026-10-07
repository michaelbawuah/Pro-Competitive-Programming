// Translation | https://codeforces.com/problemset/problem/41/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string first, second;
    std::cin >> first >> second;
    std::reverse(first.begin(), first.end());
    std::cout << (first == second ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
