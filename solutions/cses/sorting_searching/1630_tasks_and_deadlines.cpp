// Tasks and Deadlines | https://cses.fi/problemset/task/1630/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n; std::cin >> n;
    std::vector<long long> duration(n);
    long long reward = 0;
    for (int i = 0; i < n; ++i) { long long deadline; std::cin >> duration[i] >> deadline; reward += deadline; }
    std::sort(duration.begin(), duration.end());
    long long finish = 0;
    for (long long time : duration) { finish += time; reward -= finish; }
    std::cout << reward << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
