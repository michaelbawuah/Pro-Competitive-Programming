// Apple Division | https://cses.fi/problemset/task/1623/
// Time: O(2^n); extra space: O(n).
#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib>



void solve() {
    int n; std::cin >> n;
    std::vector<long long> weights(n);
    for (auto& value : weights) std::cin >> value;
    long long total = std::accumulate(weights.begin(), weights.end(), 0LL), best = total;
    auto search = [&](auto&& self, int index, long long selected) -> void {
        if (index == n) { best = std::min(best, std::abs(total - 2 * selected)); return; }
        self(self, index + 1, selected);
        self(self, index + 1, selected + weights[index]);
    };
    search(search, 0, 0);
    std::cout << best << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
