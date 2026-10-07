// Choosing Teams | https://codeforces.com/problemset/problem/432/A
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, contests, eligible = 0;
    std::cin >> n >> contests;
    while (n-- > 0) {
        int previous;
        std::cin >> previous;
        eligible += previous + contests <= 5;
    }
    std::cout << eligible / 3 << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
