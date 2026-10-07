// Odd/Even Increments | https://codeforces.com/problemset/problem/1669/C
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; int parity[2]={-1,-1}; bool possible=true;
        for (int i=0;i<n;++i) { int value; std::cin >> value; if (parity[i%2]<0) parity[i%2]=value%2; else if (parity[i%2]!=value%2) possible=false; }
        std::cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
