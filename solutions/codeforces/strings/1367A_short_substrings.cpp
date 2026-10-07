// Short Substrings | https://codeforces.com/problemset/problem/1367/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        std::string encoded;
        std::cin >> encoded;
        std::cout << encoded[0];
        for (std::size_t i = 1; i < encoded.size(); i += 2) std::cout << encoded[i];
        std::cout << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
