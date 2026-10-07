// Night at the Museum | https://codeforces.com/problemset/problem/731/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>



void solve() {
    std::string word; std::cin >> word;
    char current = 'a'; int moves = 0;
    for (char letter : word) {
        const int distance = std::abs(letter - current);
        moves += std::min(distance, 26 - distance);
        current = letter;
    }
    std::cout << moves << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
