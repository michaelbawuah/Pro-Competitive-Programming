// Ferris Wheel | https://cses.fi/problemset/task/1090/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n;
    long long limit;
    std::cin >> n >> limit;
    std::vector<long long> weights(n);
    for (auto& weight : weights) std::cin >> weight;
    std::sort(weights.begin(), weights.end());
    int left = 0, right = n - 1, gondolas = 0;
    while (left <= right) {
        if (left < right && weights[left] + weights[right] <= limit) ++left;
        --right;
        ++gondolas;
    }
    std::cout << gondolas << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
