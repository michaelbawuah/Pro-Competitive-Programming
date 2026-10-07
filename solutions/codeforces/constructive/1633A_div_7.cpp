// Div. 7 | https://codeforces.com/problemset/problem/1633/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n;
        if (n%7!=0) for (int digit=0;digit<10;++digit) {
            const int candidate=n/10*10+digit;
            if (candidate%7==0) { n=candidate; break; }
        }
        std::cout << n << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
