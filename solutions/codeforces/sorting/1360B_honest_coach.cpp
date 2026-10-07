// Honest Coach | https://codeforces.com/problemset/problem/1360/B
// Time: O(n log n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n;
        std::vector<int> strength(n);
        for (int& value : strength) std::cin >> value;
        std::sort(strength.begin(), strength.end());
        int answer = strength.back() - strength.front();
        for (int i = 1; i < n; ++i) answer = std::min(answer, strength[i] - strength[i - 1]);
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
