// Twins | https://codeforces.com/problemset/problem/160/A
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, total = 0;
    std::cin >> n;
    std::vector<int> coins(n);
    for (int& value : coins) { std::cin >> value; total += value; }
    std::sort(coins.rbegin(), coins.rend());
    int chosen = 0, count = 0;
    while (chosen <= total - chosen) chosen += coins[count++];
    std::cout << count << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
