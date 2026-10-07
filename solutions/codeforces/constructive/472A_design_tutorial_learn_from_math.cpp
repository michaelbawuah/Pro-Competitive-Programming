// Design Tutorial: Learn from Math | https://codeforces.com/problemset/problem/472/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    const int first = n % 2 == 0 ? 4 : 9;
    std::cout << first << ' ' << n - first << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
