// Boy or Girl | https://codeforces.com/problemset/problem/236/A
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string name;
    std::cin >> name;
    std::sort(name.begin(), name.end());
    const auto count = std::unique(name.begin(), name.end()) - name.begin();
    std::cout << (count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
