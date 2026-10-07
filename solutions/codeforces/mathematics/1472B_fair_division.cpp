// Fair Division | https://codeforces.com/problemset/problem/1472/B
// Time: O(n) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n,ones=0,twos=0; std::cin >> n;
        while (n-- > 0) { int weight; std::cin >> weight; if (weight==1) ++ones; else ++twos; }
        const bool possible = ones%2==0 && (ones>0 || twos%2==0);
        std::cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
