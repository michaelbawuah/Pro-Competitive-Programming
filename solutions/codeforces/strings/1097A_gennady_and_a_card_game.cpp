// Gennady and a Card Game | https://codeforces.com/problemset/problem/1097/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string table, card;
    std::cin >> table;
    bool playable = false;
    for (int i = 0; i < 5; ++i) { std::cin >> card; playable = playable || card[0] == table[0] || card[1] == table[1]; }
    std::cout << (playable ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
