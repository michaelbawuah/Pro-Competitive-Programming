// Soldier and Bananas | https://codeforces.com/problemset/problem/546/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>



void solve() {
    long long first_price, money, count;
    std::cin >> first_price >> money >> count;
    const long long total = first_price * count * (count + 1) / 2;
    std::cout << std::max(0LL, total - money) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
