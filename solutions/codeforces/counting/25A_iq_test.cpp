// IQ test | https://codeforces.com/problemset/problem/25/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, odd = 0;
    std::cin >> n;
    std::vector<int> values(n);
    for (int& value : values) { std::cin >> value; odd += value % 2; }
    const int exceptional = odd == 1 ? 1 : 0;
    for (int i = 0; i < n; ++i) if (values[i] % 2 == exceptional) std::cout << i + 1 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
