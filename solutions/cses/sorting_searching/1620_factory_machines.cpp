// Factory Machines | https://cses.fi/problemset/task/1620/
// Time: O(n log(min(k) * t)); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n;
    long long target;
    std::cin >> n >> target;
    std::vector<long long> times(n);
    for (auto& time : times) std::cin >> time;
    long long low = 0;
    long long high = *std::min_element(times.begin(), times.end()) * target;
    auto enough = [&](long long duration) {
        long long made = 0;
        for (long long time : times) {
            long long produced = duration / time;
            if (produced >= target - made) return true;
            made += produced;
        }
        return false;
    };
    while (low < high) {
        long long middle = low + (high - low) / 2;
        if (enough(middle)) high = middle;
        else low = middle + 1;
    }
    std::cout << low << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
