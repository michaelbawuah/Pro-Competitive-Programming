// Mishka and Game | https://codeforces.com/problemset/problem/703/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int rounds, score = 0;
    std::cin >> rounds;
    while (rounds-- > 0) {
        int first, second;
        std::cin >> first >> second;
        score += (first > second) - (first < second);
    }
    std::cout << (score > 0 ? "Mishka" : score < 0 ? "Chris" : "Friendship is magic!^^") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
