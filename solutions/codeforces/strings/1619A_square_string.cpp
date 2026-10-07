// Square String? | https://codeforces.com/problemset/problem/1619/A
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { std::string text; std::cin >> text; const auto half=text.size()/2; std::cout << (text.size()%2==0 && text.substr(0,half)==text.substr(half) ? "YES" : "NO") << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
