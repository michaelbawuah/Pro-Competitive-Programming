// Word Capitalization | https://codeforces.com/problemset/problem/281/A
// Time: O(n); extra space: O(n).
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    std::string word;
    std::cin >> word;
    word[0] = static_cast<char>(std::toupper(static_cast<unsigned char>(word[0])));
    std::cout << word << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
