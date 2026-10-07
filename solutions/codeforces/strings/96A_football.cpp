// Football | https://codeforces.com/problemset/problem/96/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string players;
    std::cin >> players;
    int run = 0, longest = 0;
    char previous = '?';
    for (char player : players) {
        run = player == previous ? run + 1 : 1;
        longest = std::max(longest, run);
        previous = player;
    }
    std::cout << (longest >= 7 ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
