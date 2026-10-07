// Dragons | https://codeforces.com/problemset/problem/230/A
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>



void solve() {
    int strength, n;
    std::cin >> strength >> n;
    std::vector<std::pair<int,int>> dragons(n);
    for (auto& [power, reward] : dragons) std::cin >> power >> reward;
    std::sort(dragons.begin(), dragons.end());
    bool possible = true;
    for (const auto& [power, reward] : dragons) {
        if (strength <= power) { possible = false; break; }
        strength += reward;
    }
    std::cout << (possible ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
