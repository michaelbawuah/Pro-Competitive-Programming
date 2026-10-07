// YES or YES? | https://codeforces.com/problemset/problem/1703/A
// Time: O(1) per case; extra space: O(1).
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) { std::string word; std::cin >> word; for (char& c:word) c=static_cast<char>(std::toupper(static_cast<unsigned char>(c))); std::cout << (word=="YES" ? "YES" : "NO") << '\n'; }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
