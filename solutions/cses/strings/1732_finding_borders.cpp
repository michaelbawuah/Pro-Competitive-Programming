// Finding Borders | https://cses.fi/problemset/task/1732/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string text;
    std::cin >> text;
    const int n = static_cast<int>(text.size());
    std::vector<int> prefix(n);
    for (int i = 1; i < n; ++i) {
        int matched = prefix[i - 1];
        while (matched > 0 && text[i] != text[matched]) matched = prefix[matched - 1];
        if (text[i] == text[matched]) ++matched;
        prefix[i] = matched;
    }
    std::vector<int> borders;
    for (int length = prefix[n - 1]; length > 0; length = prefix[length - 1]) borders.push_back(length);
    std::reverse(borders.begin(), borders.end());
    for (int length : borders) std::cout << length << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
