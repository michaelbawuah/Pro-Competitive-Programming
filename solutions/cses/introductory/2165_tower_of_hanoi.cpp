// Tower of Hanoi | https://cses.fi/problemset/task/2165/
// Time: O(2^n); extra space: O(n).
#include <iostream>

void move_tower(int disks, int source, int target, int spare) {
    if (disks == 0) return;
    move_tower(disks - 1, source, spare, target);
    std::cout << source << ' ' << target << '\n';
    move_tower(disks - 1, spare, target, source);
}

void solve() {
    int n; std::cin >> n;
    std::cout << (1LL << n) - 1 << '\n';
    move_tower(n, 1, 3, 2);
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
