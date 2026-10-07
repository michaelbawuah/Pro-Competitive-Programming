// Elections | https://codeforces.com/problemset/problem/1593/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        long long a,b,c; std::cin >> a >> b >> c;
        std::cout << std::max(0LL,std::max(b,c)+1-a) << ' ' << std::max(0LL,std::max(a,c)+1-b) << ' ' << std::max(0LL,std::max(a,b)+1-c) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
