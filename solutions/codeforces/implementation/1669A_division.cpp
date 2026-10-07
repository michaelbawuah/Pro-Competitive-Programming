// Division? | https://codeforces.com/problemset/problem/1669/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { int rating; std::cin >> rating; const int division=rating>=1900 ? 1 : rating>=1600 ? 2 : rating>=1400 ? 3 : 4; std::cout << "Division " << division << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
