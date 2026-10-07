// Word | https://codeforces.com/problemset/problem/59/A
// Time: O(n); extra space: O(n).
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    std::string word;
    std::cin >> word;
    int uppercase = 0;
    for (unsigned char character : word) if (std::isupper(character)) ++uppercase;
    const bool use_uppercase = uppercase > static_cast<int>(word.size()) - uppercase;
    for (char& character : word) {
        const unsigned char value = static_cast<unsigned char>(character);
        character = static_cast<char>(use_uppercase ? std::toupper(value) : std::tolower(value));
    }
    std::cout << word << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
