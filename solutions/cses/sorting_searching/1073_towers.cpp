// Towers | https://cses.fi/problemset/task/1073/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    std::vector<int> tops;
    for (int i = 0, cube; i < n; ++i) {
        std::cin >> cube;
        auto it = std::upper_bound(tops.begin(), tops.end(), cube);
        if (it == tops.end()) tops.push_back(cube);
        else *it = cube;
    }
    std::cout << tops.size() << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
