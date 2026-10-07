// String Matching | https://cses.fi/problemset/task/1753/
// Time: O(n + m); extra space: O(m) beyond input.
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string text, pattern;
    std::cin >> text >> pattern;
    int m = static_cast<int>(pattern.size());
    std::vector<int> prefix(m);
    for (int i = 1; i < m; ++i) {
        int j = prefix[i - 1];
        while (j > 0 && pattern[i] != pattern[j]) j = prefix[j - 1];
        if (pattern[i] == pattern[j]) ++j;
        prefix[i] = j;
    }
    int matched = 0, answer = 0;
    for (char ch : text) {
        while (matched > 0 && ch != pattern[matched]) matched = prefix[matched - 1];
        if (ch == pattern[matched]) ++matched;
        if (matched == m) { ++answer; matched = prefix[matched - 1]; }
    }
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
