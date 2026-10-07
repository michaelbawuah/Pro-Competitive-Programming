// Soft Drinking | https://codeforces.com/problemset/problem/151/A
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int friends, bottles, volume, limes, slices, salt, drink_per_toast, salt_per_toast;
    std::cin >> friends >> bottles >> volume >> limes >> slices >> salt >> drink_per_toast >> salt_per_toast;
    const int total = std::min({bottles * volume / drink_per_toast, limes * slices, salt / salt_per_toast});
    std::cout << total / friends << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
