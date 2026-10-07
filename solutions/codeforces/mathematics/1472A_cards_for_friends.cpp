// Cards for Friends | https://codeforces.com/problemset/problem/1472/A
// Time: O(log w + log h) per case; extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int width,height,needed; std::cin >> width >> height >> needed;
        long long pieces=1;
        while (width%2==0) { width/=2; pieces*=2; }
        while (height%2==0) { height/=2; pieces*=2; }
        std::cout << (pieces>=needed ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
