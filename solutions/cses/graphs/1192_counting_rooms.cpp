// Counting Rooms | https://cses.fi/problemset/task/1192/
// Time: O(n * m); extra space: O(n * m).
#include <iostream>
#include <vector>
#include <string>
#include <utility>



void solve() {
    int rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::string> grid(rows);
    for (auto& row : grid) std::cin >> row;
    const int dr[] = {-1, 1, 0, 0};
    const int dc[] = {0, 0, -1, 1};
    int rooms = 0;
    for (int r = 0; r < rows; ++r) {
        for (int c = 0; c < cols; ++c) {
            if (grid[r][c] != '.') continue;
            ++rooms;
            std::vector<std::pair<int, int>> stack{{r, c}};
            grid[r][c] = '#';
            while (!stack.empty()) {
                auto [x, y] = stack.back();
                stack.pop_back();
                for (int d = 0; d < 4; ++d) {
                    int nx = x + dr[d], ny = y + dc[d];
                    if (nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == '.') {
                        grid[nx][ny] = '#';
                        stack.emplace_back(nx, ny);
                    }
                }
            }
        }
    }
    std::cout << rooms << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
