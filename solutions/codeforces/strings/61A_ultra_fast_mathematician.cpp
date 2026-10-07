// Ultra-Fast Mathematician | https://codeforces.com/problemset/problem/61/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string first, second;
    std::cin >> first >> second;
    for (std::size_t i = 0; i < first.size(); ++i) std::cout << (first[i] == second[i] ? '0' : '1');
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
