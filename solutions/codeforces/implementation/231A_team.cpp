// Team | https://codeforces.com/problemset/problem/231/A
// Time: O(n); extra space: O(1).
#include <iostream>



void solve() {
    int n, solved = 0;
    std::cin >> n;
    while (n--) {
        int a, b, c; std::cin >> a >> b >> c;
        if (a + b + c >= 2) ++solved;
    }
    std::cout << solved << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
