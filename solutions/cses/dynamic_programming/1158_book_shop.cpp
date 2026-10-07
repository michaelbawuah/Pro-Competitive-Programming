// Book Shop | https://cses.fi/problemset/task/1158/
// Time: O(n * x); extra space: O(n + x).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n, budget;
    std::cin >> n >> budget;
    std::vector<int> price(n), pages(n), best(budget + 1);
    for (auto& value : price) std::cin >> value;
    for (auto& value : pages) std::cin >> value;
    for (int book = 0; book < n; ++book) {
        for (int money = budget; money >= price[book]; --money) {
            best[money] = std::max(best[money], best[money - price[book]] + pages[book]);
        }
    }
    std::cout << best[budget] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
