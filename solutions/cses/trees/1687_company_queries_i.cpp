// Company Queries I | https://cses.fi/problemset/task/1687/
// Time: O((n + q) log n); extra space: O(n log n).
#include <iostream>
#include <vector>



void solve() {
    int n, queries;
    std::cin >> n >> queries;
    int levels = 1;
    while ((1LL << levels) <= n) ++levels;
    std::vector<std::vector<int>> ancestor(levels, std::vector<int>(n + 1));
    for (int employee = 2; employee <= n; ++employee) std::cin >> ancestor[0][employee];
    for (int level = 1; level < levels; ++level) {
        for (int employee = 1; employee <= n; ++employee)
            ancestor[level][employee] = ancestor[level - 1][ancestor[level - 1][employee]];
    }
    while (queries-- > 0) {
        int employee, steps;
        std::cin >> employee >> steps;
        for (int level = 0; level < levels; ++level)
            if ((steps >> level) & 1) employee = ancestor[level][employee];
        std::cout << (employee == 0 ? -1 : employee) << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
