// Pangram | https://codeforces.com/problemset/problem/520/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <array>
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    int n;
    std::string text;
    std::cin >> n >> text;
    std::array<bool, 26> seen{};
    for (unsigned char character : text) seen[std::tolower(character) - 'a'] = true;
    std::cout << (std::all_of(seen.begin(), seen.end(), [](bool value) { return value; }) ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
