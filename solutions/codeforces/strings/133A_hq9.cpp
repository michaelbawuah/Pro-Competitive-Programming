// HQ9+ | https://codeforces.com/problemset/problem/133/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string program;
    std::cin >> program;
    const bool output = program.find_first_of("HQ9") != std::string::npos;
    std::cout << (output ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
