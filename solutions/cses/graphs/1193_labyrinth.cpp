// Labyrinth | https://cses.fi/problemset/task/1193/
// Time: O(n m); extra space: O(n m).
#include <algorithm>
#include <array>
#include <iostream>
#include <queue>
#include <string>
#include <vector>



void solve() {
    int rows, columns;
    std::cin >> rows >> columns;
    std::vector<std::string> grid(rows);
    int start = -1, finish = -1;
    for (int row = 0; row < rows; ++row) {
        std::cin >> grid[row];
        for (int column = 0; column < columns; ++column) {
            if (grid[row][column] == 'A') start = row * columns + column;
            if (grid[row][column] == 'B') finish = row * columns + column;
        }
    }
    const std::array<int, 4> dr{1, -1, 0, 0}, dc{0, 0, 1, -1};
    const std::string move = "DURL";
    std::vector<int> parent(rows * columns, -1);
    std::queue<int> pending;
    parent[start] = -2;
    pending.push(start);
    while (!pending.empty()) {
        const int cell = pending.front();
        pending.pop();
        if (cell == finish) break;
        const int row = cell / columns, column = cell % columns;
        for (int direction = 0; direction < 4; ++direction) {
            const int next_row = row + dr[direction], next_column = column + dc[direction];
            if (next_row < 0 || next_row >= rows || next_column < 0 || next_column >= columns) continue;
            const int next = next_row * columns + next_column;
            if (grid[next_row][next_column] == '#' || parent[next] != -1) continue;
            parent[next] = direction;
            pending.push(next);
        }
    }
    if (parent[finish] == -1) {
        std::cout << "NO\n";
        return;
    }
    std::string path;
    for (int cell = finish; cell != start;) {
        const int direction = parent[cell];
        path.push_back(move[direction]);
        cell -= dr[direction] * columns + dc[direction];
    }
    std::reverse(path.begin(), path.end());
    std::cout << "YES\n" << path.size() << '\n' << path << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
