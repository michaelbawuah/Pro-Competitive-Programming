// Chessboard and Queens | https://cses.fi/problemset/task/1624/
// Time: O(8 * 8!) upper bound; extra space: O(8) recursion, fixed board.
#include <iostream>
#include <array>
#include <string>



void solve() {
    std::array<std::string, 8> board;
    for (auto& row : board) std::cin >> row;
    std::array<bool, 8> column{};
    std::array<bool, 15> diagonal_a{}, diagonal_b{};
    int answer = 0;
    auto search = [&](auto&& self, int row) -> void {
        if (row == 8) { ++answer; return; }
        for (int col = 0; col < 8; ++col) {
            int a = row + col, b = row - col + 7;
            if (board[row][col] == '*' || column[col] || diagonal_a[a] || diagonal_b[b]) continue;
            column[col] = diagonal_a[a] = diagonal_b[b] = true;
            self(self, row + 1);
            column[col] = diagonal_a[a] = diagonal_b[b] = false;
        }
    };
    search(search, 0);
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
