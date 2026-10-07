// Way Too Long Words | https://codeforces.com/problemset/problem/71/A
// Time: O(total input length); extra space: O(longest word).
#include <iostream>
#include <string>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests--) {
        std::string word; std::cin >> word;
        if (word.size() > 10) std::cout << word.front() << word.size() - 2 << word.back() << '\n';
        else std::cout << word << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
