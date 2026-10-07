// Increasing Subsequence | https://cses.fi/problemset/task/1145/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n;
    std::cin >> n;
    std::vector<long long> tails;
    for (int i = 0; i < n; ++i) {
        long long value;
        std::cin >> value;
        auto it = std::lower_bound(tails.begin(), tails.end(), value);
        if (it == tails.end()) tails.push_back(value);
        else *it = value;
    }
    std::cout << tails.size() << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
