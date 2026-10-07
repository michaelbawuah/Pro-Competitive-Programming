// Gravity Flip | https://codeforces.com/problemset/problem/405/A
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> heights(n);
    for (int& height : heights) std::cin >> height;
    std::sort(heights.begin(), heights.end());
    for (int height : heights) std::cout << height << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
