// Anton and Danik | https://codeforces.com/problemset/problem/734/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::string games;
    std::cin >> n >> games;
    const int anton = static_cast<int>(std::count(games.begin(), games.end(), 'A'));
    std::cout << (anton * 2 > n ? "Anton" : anton * 2 < n ? "Danik" : "Friendship") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
