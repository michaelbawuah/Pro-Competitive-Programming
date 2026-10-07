// Movie Festival | https://cses.fi/problemset/task/1629/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>



void solve() {
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> movies;
    for (int i = 0; i < n; ++i) {
        int start, finish;
        std::cin >> start >> finish;
        movies.emplace_back(finish, start);
    }
    std::sort(movies.begin(), movies.end());
    int last_finish = 0, answer = 0;
    for (const auto& [finish, start] : movies) {
        if (start >= last_finish) {
            ++answer;
            last_finish = finish;
        }
    }
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
