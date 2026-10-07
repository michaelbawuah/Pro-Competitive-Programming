// Social Distance | https://codeforces.com/problemset/problem/1367/C
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests;
    std::cin >> tests;
    while (tests-- > 0) {
        int n, gap; std::string seats;
        std::cin >> n >> gap >> seats;
        std::vector<int> next(n + 1, n + gap + 1);
        for (int i = n - 1; i >= 0; --i) next[i] = seats[i] == '1' ? i : next[i + 1];
        int last = -gap - 1, added = 0;
        for (int i = 0; i < n; ++i) {
            if (seats[i] == '1') last = i;
            else if (i - last > gap && next[i] - i > gap) { ++added; last = i; }
        }
        std::cout << added << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
