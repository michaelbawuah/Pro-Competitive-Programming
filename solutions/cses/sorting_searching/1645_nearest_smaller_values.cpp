// Nearest Smaller Values | https://cses.fi/problemset/task/1645/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>
#include <utility>



void solve() {
    int n; std::cin >> n;
    std::vector<std::pair<long long, int>> stack;
    for (int i = 1; i <= n; ++i) {
        long long value; std::cin >> value;
        while (!stack.empty() && stack.back().first >= value) stack.pop_back();
        std::cout << (stack.empty() ? 0 : stack.back().second) << (i == n ? '\n' : ' ');
        stack.emplace_back(value, i);
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
