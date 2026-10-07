// Knapsack 2 | https://atcoder.jp/contests/dp/tasks/dp_e
// Time: O(n V), V = sum of values; extra space: O(V + n).
#include <algorithm>
#include <iostream>
#include <limits>
#include <utility>
#include <vector>



void solve() {
    int n;
    long long capacity;
    std::cin >> n >> capacity;
    std::vector<std::pair<long long, int>> items(n);
    int total_value = 0;
    for (auto& [weight, value] : items) {
        std::cin >> weight >> value;
        total_value += value;
    }
    constexpr long long infinity = std::numeric_limits<long long>::max() / 4;
    std::vector<long long> minimum_weight(total_value + 1, infinity);
    minimum_weight[0] = 0;
    for (const auto& [weight, value] : items) {
        for (int sum = total_value; sum >= value; --sum) {
            if (minimum_weight[sum - value] != infinity)
                minimum_weight[sum] = std::min(minimum_weight[sum], minimum_weight[sum - value] + weight);
        }
    }
    for (int value = total_value; value >= 0; --value) {
        if (minimum_weight[value] <= capacity) {
            std::cout << value << '\n';
            return;
        }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
