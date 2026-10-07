// Infinity Table | https://codeforces.com/problemset/problem/1560/C
// Time: O(1) per case; extra space: O(1).
#include <cmath>
#include <iostream>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        long long n; std::cin >> n;
        long long layer=static_cast<long long>(std::sqrt(static_cast<long double>(n)));
        if (layer*layer<n) ++layer;
        const long long offset=n-(layer-1)*(layer-1);
        if (offset<=layer) std::cout << offset << ' ' << layer << '\n';
        else std::cout << layer << ' ' << 2*layer-offset << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
