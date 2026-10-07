// Grid Paths I | https://cses.fi/problemset/task/1638/
// Time: O(n^2); extra space: O(n).
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    constexpr int mod = 1000000007;
    std::vector<int> ways(n);
    ways[0] = 1;
    for (int row = 0; row < n; ++row) {
        std::string cells;
        std::cin >> cells;
        for (int column = 0; column < n; ++column) {
            if (cells[column] == '*') ways[column] = 0;
            else if (column > 0) {
                ways[column] += ways[column - 1];
                if (ways[column] >= mod) ways[column] -= mod;
            }
        }
    }
    std::cout << ways[n - 1] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
