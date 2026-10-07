// Grid 1 | https://atcoder.jp/contests/dp/tasks/dp_h
// Time: O(H W); extra space: O(W).
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int height, width;
    std::cin >> height >> width;
    constexpr int mod = 1000000007;
    std::vector<int> ways(width);
    ways[0] = 1;
    for (int row = 0; row < height; ++row) {
        std::string cells;
        std::cin >> cells;
        for (int column = 0; column < width; ++column) {
            if (cells[column] == '#') ways[column] = 0;
            else if (column > 0) {
                ways[column] += ways[column - 1];
                if (ways[column] >= mod) ways[column] -= mod;
            }
        }
    }
    std::cout << ways[width - 1] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
