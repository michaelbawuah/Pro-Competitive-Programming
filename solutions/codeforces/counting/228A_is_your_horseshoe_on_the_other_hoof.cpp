// Is your horseshoe on the other hoof? | https://codeforces.com/problemset/problem/228/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int> colors(4);
    for (int& color : colors) std::cin >> color;
    std::sort(colors.begin(), colors.end());
    const int distinct = static_cast<int>(std::unique(colors.begin(), colors.end()) - colors.begin());
    std::cout << 4 - distinct << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
