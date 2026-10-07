// Magnets | https://codeforces.com/problemset/problem/344/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, groups = 0;
    std::cin >> n;
    std::string previous, magnet;
    while (n-- > 0) {
        std::cin >> magnet;
        groups += magnet != previous;
        previous = magnet;
    }
    std::cout << groups << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
