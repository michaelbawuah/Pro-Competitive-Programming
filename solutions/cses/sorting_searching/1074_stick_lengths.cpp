// Stick Lengths | https://cses.fi/problemset/task/1074/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>



void solve() {
    int n; std::cin >> n;
    std::vector<long long> lengths(n);
    for (auto& value : lengths) std::cin >> value;
    std::sort(lengths.begin(), lengths.end());
    long long median = lengths[n / 2], cost = 0;
    for (long long value : lengths) cost += std::abs(value - median);
    std::cout << cost << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
