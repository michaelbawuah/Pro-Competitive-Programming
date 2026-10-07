// Palindrome Reorder | https://cses.fi/problemset/task/1755/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <array>
#include <string>
#include <algorithm>



void solve() {
    std::string s; std::cin >> s;
    std::array<int, 26> count{};
    for (char ch : s) ++count[ch - 'A'];
    int odd = 0;
    std::string half, middle;
    for (int i = 0; i < 26; ++i) {
        half.append(count[i] / 2, static_cast<char>('A' + i));
        if (count[i] % 2) { ++odd; middle = static_cast<char>('A' + i); }
    }
    if (odd > 1) { std::cout << "NO SOLUTION\n"; return; }
    std::cout << half << middle;
    std::reverse(half.begin(), half.end());
    std::cout << half << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
