// Nearly Lucky Number | https://codeforces.com/problemset/problem/110/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string value;
    std::cin >> value;
    int lucky = 0;
    for (char digit : value) lucky += digit == '4' || digit == '7';
    std::cout << (lucky == 4 || lucky == 7 ? "YES" : "NO") << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
