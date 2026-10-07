// Odd Grasshopper | https://codeforces.com/problemset/problem/1607/B
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        long long x,n; std::cin >> x >> n;
        const long long sign=x%2==0 ? -1 : 1;
        if (n%4==1) x+=sign*n;
        else if (n%4==2) x-=sign;
        else if (n%4==3) x-=sign*(n+1);
        std::cout << x << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
