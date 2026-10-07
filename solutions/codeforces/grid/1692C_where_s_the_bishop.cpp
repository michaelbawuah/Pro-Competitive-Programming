// Where's the Bishop? | https://codeforces.com/problemset/problem/1692/C
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        std::vector<std::string> board(8); for (auto& row:board) std::cin >> row;
        for (int i=1;i<7;++i) for (int j=1;j<7;++j)
            if (board[i][j]=='#' && board[i-1][j-1]=='#' && board[i-1][j+1]=='#' && board[i+1][j-1]=='#' && board[i+1][j+1]=='#')
                std::cout << i+1 << ' ' << j+1 << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
