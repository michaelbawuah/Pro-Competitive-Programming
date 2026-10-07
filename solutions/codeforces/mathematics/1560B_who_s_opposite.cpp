// Who's Opposite? | https://codeforces.com/problemset/problem/1560/B
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <cstdlib>
#include <iostream>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int a,b,c; std::cin >> a >> b >> c;
        const int half=std::abs(a-b), size=2*half;
        std::cout << (std::max({a,b,c})>size ? -1 : (c-1+half)%size+1) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
