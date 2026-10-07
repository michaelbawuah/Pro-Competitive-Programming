// Projects | https://cses.fi/problemset/task/1140/
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>

struct Project { int start; int end; long long reward; };

void solve() {
    int n;
    std::cin >> n;
    std::vector<Project> projects(n);
    for (auto& project : projects) std::cin >> project.start >> project.end >> project.reward;
    std::sort(projects.begin(), projects.end(), [](const Project& a, const Project& b) {
        return a.end < b.end;
    });
    std::vector<int> ends(n);
    for (int i = 0; i < n; ++i) ends[i] = projects[i].end;
    std::vector<long long> best(n + 1);
    for (int i = 0; i < n; ++i) {
        const int compatible = static_cast<int>(std::lower_bound(ends.begin(), ends.begin() + i, projects[i].start) - ends.begin());
        best[i + 1] = std::max(best[i], best[compatible] + projects[i].reward);
    }
    std::cout << best[n] << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
