// Arrival of the General | https://codeforces.com/problemset/problem/144/A
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> height(n);
    for (int& value : height) std::cin >> value;
    int tallest = 0, shortest = 0;
    for (int i = 0; i < n; ++i) {
        if (height[i] > height[tallest]) tallest = i;
        if (height[i] <= height[shortest]) shortest = i;
    }
    std::cout << tallest + n - 1 - shortest - (tallest > shortest) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
