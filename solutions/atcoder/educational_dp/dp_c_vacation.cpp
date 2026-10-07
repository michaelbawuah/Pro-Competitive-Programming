// Vacation | https://atcoder.jp/contests/dp/tasks/dp_c
// Time: O(n); extra space: O(1).
#include <iostream>
#include <array>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    std::array<long long, 3> best{0, 0, 0};
    for (int day = 0; day < n; ++day) {
        std::array<long long, 3> reward, next;
        for (auto& value : reward) std::cin >> value;
        for (int activity = 0; activity < 3; ++activity) {
            next[activity] = reward[activity] + std::max(best[(activity + 1) % 3], best[(activity + 2) % 3]);
        }
        best = next;
    }
    std::cout << *std::max_element(best.begin(), best.end()) << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
