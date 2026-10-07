// Lucky? | https://codeforces.com/problemset/problem/1676/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { std::string ticket; std::cin >> ticket; int difference=0; for (int i=0;i<3;++i) difference+=ticket[i]-ticket[i+3]; std::cout << (difference==0 ? "YES" : "NO") << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
