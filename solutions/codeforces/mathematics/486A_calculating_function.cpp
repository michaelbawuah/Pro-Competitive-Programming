// Calculating Function | https://codeforces.com/problemset/problem/486/A
// Time: O(1); extra space: O(1).
#include <iostream>



void solve() {
    long long n;
    std::cin >> n;
    std::cout << (n % 2 == 0 ? n / 2 : -(n + 1) / 2) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
