// Make AP | https://codeforces.com/problemset/problem/1624/B
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        long long a,b,c; std::cin >> a >> b >> c;
        const bool first=2*b-c>0 && (2*b-c)%a==0;
        const bool middle=(a+c)%2==0 && ((a+c)/2)%b==0;
        const bool last=2*b-a>0 && (2*b-a)%c==0;
        std::cout << (first || middle || last ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
