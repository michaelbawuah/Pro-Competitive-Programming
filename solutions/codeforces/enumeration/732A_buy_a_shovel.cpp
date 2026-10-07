// Buy a Shovel | https://codeforces.com/problemset/problem/732/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int price, coin;
    std::cin >> price >> coin;
    for (int count = 1; count <= 10; ++count) {
        const int remainder = price * count % 10;
        if (remainder == 0 || remainder == coin) { std::cout << count << '\n'; break; }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
