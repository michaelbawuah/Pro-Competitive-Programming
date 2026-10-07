// I_love_%username% | https://codeforces.com/problemset/problem/155/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, low, high, records = 0;
    std::cin >> n >> low;
    high = low;
    for (int i = 1; i < n; ++i) {
        int score;
        std::cin >> score;
        records += score < low || score > high;
        low = std::min(low, score);
        high = std::max(high, score);
    }
    std::cout << records << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
