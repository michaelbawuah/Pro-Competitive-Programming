// Drinks | https://codeforces.com/problemset/problem/200/B
// Time: O(n); extra space: O(1).
#include <iostream>
#include <iomanip>



void solve() {
    int n;
    std::cin >> n;
    double total = 0;
    for (int i = 0; i < n; ++i) {
        int percentage;
        std::cin >> percentage;
        total += percentage;
    }
    std::cout << std::fixed << std::setprecision(12) << total / n << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
