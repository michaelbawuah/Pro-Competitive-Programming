// Bear and Big Brother | https://codeforces.com/problemset/problem/791/A
// Time: O(log(b/a) + 1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int first, second, years = 0;
    std::cin >> first >> second;
    while (first <= second) {
        first *= 3;
        second *= 2;
        ++years;
    }
    std::cout << years << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
