// Edit Distance | https://cses.fi/problemset/task/1639/
// Time: O(n * m); extra space: O(min(n, m)) beyond input.
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>



void solve() {
    std::string a, b;
    std::cin >> a >> b;
    if (b.size() > a.size()) std::swap(a, b);
    int n = static_cast<int>(a.size()), m = static_cast<int>(b.size());
    std::vector<int> previous(m + 1), current(m + 1);
    std::iota(previous.begin(), previous.end(), 0);
    for (int i = 1; i <= n; ++i) {
        current[0] = i;
        for (int j = 1; j <= m; ++j) {
            current[j] = std::min({previous[j] + 1, current[j - 1] + 1,
                                   previous[j - 1] + (a[i - 1] != b[j - 1])});
        }
        previous.swap(current);
    }
    std::cout << previous[m] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
