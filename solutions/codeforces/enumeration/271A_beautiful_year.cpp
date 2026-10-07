// Beautiful Year | https://codeforces.com/problemset/problem/271/A
// Time: O(gap); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int year;
    std::cin >> year;
    while (true) {
        std::string digits = std::to_string(++year);
        std::sort(digits.begin(), digits.end());
        if (std::adjacent_find(digits.begin(), digits.end()) == digits.end()) break;
    }
    std::cout << year << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
