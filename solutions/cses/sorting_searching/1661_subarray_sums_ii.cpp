// Subarray Sums II | https://cses.fi/problemset/task/1661/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <map>



void solve() {
    int n;
    long long target;
    std::cin >> n >> target;
    std::map<long long, long long> frequency;
    frequency[0] = 1;
    long long prefix = 0, answer = 0;
    for (int i = 0; i < n; ++i) {
        long long value;
        std::cin >> value;
        prefix += value;
        auto it = frequency.find(prefix - target);
        if (it != frequency.end()) answer += it->second;
        ++frequency[prefix];
    }
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
