// Apartments | https://cses.fi/problemset/task/1084/
// Time: O(n log n + m log m); extra space: O(n + m).
#include <iostream>
#include <vector>
#include <algorithm>



void solve() {
    int n, m;
    long long k;
    std::cin >> n >> m >> k;
    std::vector<long long> want(n), apartments(m);
    for (auto& value : want) std::cin >> value;
    for (auto& value : apartments) std::cin >> value;
    std::sort(want.begin(), want.end());
    std::sort(apartments.begin(), apartments.end());
    int i = 0, j = 0, matches = 0;
    while (i < n && j < m) {
        if (apartments[j] < want[i] - k) ++j;
        else if (apartments[j] > want[i] + k) ++i;
        else { ++matches; ++i; ++j; }
    }
    std::cout << matches << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
