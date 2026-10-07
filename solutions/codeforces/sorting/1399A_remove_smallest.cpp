// Remove Smallest | https://codeforces.com/problemset/problem/1399/A
// Time: O(n log n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> values(n);
        for (int& x : values) std::cin >> x;
        std::sort(values.begin(), values.end()); bool possible = true;
        for (int i = 1; i < n; ++i) if (values[i] - values[i-1] > 1) possible = false;
        std::cout << (possible ? "YES" : "NO") << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
