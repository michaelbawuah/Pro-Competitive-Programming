// Distinct Numbers | https://cses.fi/problemset/task/1621/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> values(n);
    for (auto& value : values) std::cin >> value;
    std::sort(values.begin(), values.end());
    auto end = std::unique(values.begin(), values.end());
    std::cout << std::distance(values.begin(), end) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
