// Number Spiral | https://cses.fi/problemset/task/1071/
// Time: O(q); extra space: O(1).
#include <iostream>



void solve() {
    int tests; std::cin >> tests;
    while (tests--) {
        long long row, col; std::cin >> row >> col;
        long long answer;
        if (row >= col) answer = (row % 2 == 0) ? row * row - col + 1 : (row - 1) * (row - 1) + col;
        else answer = (col % 2 == 1) ? col * col - row + 1 : (col - 1) * (col - 1) + row;
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
