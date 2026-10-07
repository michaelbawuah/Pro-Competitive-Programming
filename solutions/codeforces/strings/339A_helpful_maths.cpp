// Helpful Maths | https://codeforces.com/problemset/problem/339/A
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>



void solve() {
    std::string expression, digits;
    std::cin >> expression;
    for (char character : expression) if (character != '+') digits.push_back(character);
    std::sort(digits.begin(), digits.end());
    for (std::size_t i = 0; i < digits.size(); ++i) {
        if (i != 0) std::cout << '+';
        std::cout << digits[i];
    }
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
