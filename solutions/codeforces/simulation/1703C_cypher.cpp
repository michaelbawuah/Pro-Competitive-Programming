// Cypher | https://codeforces.com/problemset/problem/1703/C
// Time: O(total moves) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> digits(n); for (int& digit:digits) std::cin >> digit;
        for (int& digit:digits) { int count; std::string moves; std::cin >> count >> moves; for (char move:moves) digit=(digit+(move=='U' ? 9 : 1))%10; }
        for (int digit:digits) std::cout << digit << ' ';
        std::cout << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
