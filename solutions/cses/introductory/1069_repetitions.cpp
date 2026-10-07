// Repetitions | https://cses.fi/problemset/task/1069/
// Time: O(n); extra space: O(1) beyond input.
#include <iostream>
#include <string>
#include <algorithm>



void solve() {
    std::string s;
    std::cin >> s;
    int best = 0, run = 0;
    char previous = '\0';
    for (char ch : s) {
        run = (ch == previous) ? run + 1 : 1;
        best = std::max(best, run);
        previous = ch;
    }
    std::cout << best << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
