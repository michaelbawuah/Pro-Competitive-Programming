// Restaurant Customers | https://cses.fi/problemset/task/1619/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    std::vector<std::pair<int, int>> events;
    for (int i = 0, arrival, departure; i < n; ++i) {
        std::cin >> arrival >> departure;
        events.emplace_back(arrival, 1); events.emplace_back(departure, -1);
    }
    std::sort(events.begin(), events.end());
    int current = 0, best = 0;
    for (const auto& event : events) { current += event.second; best = std::max(best, current); }
    std::cout << best << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
