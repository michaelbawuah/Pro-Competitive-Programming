// Bit++ | https://codeforces.com/problemset/problem/282/A
// Time: O(n); extra space: O(1).
#include <iostream>
#include <string>



void solve() {
    int n, value = 0;
    std::cin >> n;
    while (n-- > 0) {
        std::string operation;
        std::cin >> operation;
        value += operation[1] == '+' ? 1 : -1;
    }
    std::cout << value << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
