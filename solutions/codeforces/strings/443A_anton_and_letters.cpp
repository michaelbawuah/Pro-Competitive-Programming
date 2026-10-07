// Anton and Letters | https://codeforces.com/problemset/problem/443/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <array>
#include <iostream>
#include <string>



void solve() {
    std::string line;
    std::getline(std::cin, line);
    std::array<bool, 26> seen{};
    for (char character : line) if ('a' <= character && character <= 'z') seen[character - 'a'] = true;
    std::cout << std::count(seen.begin(), seen.end(), true) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
