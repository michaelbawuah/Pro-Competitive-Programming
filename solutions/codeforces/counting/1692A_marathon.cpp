// Marathon | https://codeforces.com/problemset/problem/1692/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { int first,answer=0; std::cin >> first; for (int i=0;i<3;++i) { int value; std::cin >> value; answer+=value>first; } std::cout << answer << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
