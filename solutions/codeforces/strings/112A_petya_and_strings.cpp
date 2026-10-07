// Petya and Strings | https://codeforces.com/problemset/problem/112/A
// Time: O(n); extra space: O(n).
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    std::string first, second;
    std::cin >> first >> second;
    for (char& character : first) character = static_cast<char>(std::tolower(static_cast<unsigned char>(character)));
    for (char& character : second) character = static_cast<char>(std::tolower(static_cast<unsigned char>(character)));
    std::cout << (first < second ? -1 : first > second ? 1 : 0) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
