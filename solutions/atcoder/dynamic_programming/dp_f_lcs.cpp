// LCS | https://atcoder.jp/contests/dp/tasks/dp_f
// Time: O(n m); extra space: O(n m).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string first, second;
    std::cin >> first >> second;
    const int n = static_cast<int>(first.size()), m = static_cast<int>(second.size());
    std::vector<std::vector<int>> length(n + 1, std::vector<int>(m + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (first[i - 1] == second[j - 1]) length[i][j] = length[i - 1][j - 1] + 1;
            else length[i][j] = std::max(length[i - 1][j], length[i][j - 1]);
        }
    }
    std::string answer;
    int i = n, j = m;
    while (i > 0 && j > 0) {
        if (first[i - 1] == second[j - 1]) {
            answer.push_back(first[i - 1]);
            --i; --j;
        } else if (length[i - 1][j] >= length[i][j - 1]) --i;
        else --j;
    }
    std::reverse(answer.begin(), answer.end());
    std::cout << answer << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
