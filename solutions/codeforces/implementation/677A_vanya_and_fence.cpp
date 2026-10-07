// Vanya and Fence | https://codeforces.com/problemset/problem/677/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, fence, width = 0;
    std::cin >> n >> fence;
    while (n-- > 0) { int height; std::cin >> height; width += height > fence ? 2 : 1; }
    std::cout << width << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
