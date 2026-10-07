// George and Accommodation | https://codeforces.com/problemset/problem/467/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, available = 0;
    std::cin >> n;
    while (n-- > 0) {
        int occupied, capacity;
        std::cin >> occupied >> capacity;
        available += capacity - occupied >= 2;
    }
    std::cout << available << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
