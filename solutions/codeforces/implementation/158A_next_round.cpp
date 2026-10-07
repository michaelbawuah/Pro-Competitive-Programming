// Next Round | https://codeforces.com/problemset/problem/158/A
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> scores(n);
    for (auto& score : scores) std::cin >> score;
    int advanced = 0;
    for (int score : scores) if (score > 0 && score >= scores[k - 1]) ++advanced;
    std::cout << advanced << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
