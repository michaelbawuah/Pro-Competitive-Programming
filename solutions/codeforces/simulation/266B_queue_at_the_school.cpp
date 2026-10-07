// Queue at the School | https://codeforces.com/problemset/problem/266/B
// Time: O(n t); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n, seconds;
    std::string queue;
    std::cin >> n >> seconds >> queue;
    while (seconds-- > 0) {
        for (int i = 0; i + 1 < n; ++i) {
            if (queue[i] == 'B' && queue[i + 1] == 'G') {
                std::swap(queue[i], queue[i + 1]);
                ++i;
            }
        }
    }
    std::cout << queue << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
