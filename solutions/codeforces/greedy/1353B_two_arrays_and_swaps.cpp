// Two Arrays And Swaps | https://codeforces.com/problemset/problem/1353/B
// Time: O(n log n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n,k; std::cin >> n >> k;
        std::vector<int> a(n), b(n);
        for (int& value : a) std::cin >> value;
        for (int& value : b) std::cin >> value;
        std::sort(a.begin(), a.end()); std::sort(b.rbegin(), b.rend());
        for (int i = 0; i < k && b[i] > a[i]; ++i) std::swap(a[i], b[i]);
        int sum = 0; for (int value : a) sum += value;
        std::cout << sum << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
