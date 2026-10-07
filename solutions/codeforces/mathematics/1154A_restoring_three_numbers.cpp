// Restoring Three Numbers | https://codeforces.com/problemset/problem/1154/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int> sums(4);
    for (int& value : sums) std::cin >> value;
    std::sort(sums.begin(), sums.end());
    for (int i = 0; i < 3; ++i) std::cout << sums[3] - sums[i] << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
