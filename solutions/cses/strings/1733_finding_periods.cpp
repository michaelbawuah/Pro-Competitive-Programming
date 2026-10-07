// Finding Periods | https://cses.fi/problemset/task/1733/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string text;
    std::cin >> text;
    const int n = static_cast<int>(text.size());
    std::vector<int> z(n);
    int left = 0, right = 0;
    for (int i = 1; i < n; ++i) {
        if (i < right) z[i] = std::min(right - i, z[i - left]);
        while (i + z[i] < n && text[z[i]] == text[i + z[i]]) ++z[i];
        if (i + z[i] > right) {
            left = i;
            right = i + z[i];
        }
    }
    for (int length = 1; length < n; ++length)
        if (z[length] == n - length) std::cout << length << ' ';
    std::cout << n << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
