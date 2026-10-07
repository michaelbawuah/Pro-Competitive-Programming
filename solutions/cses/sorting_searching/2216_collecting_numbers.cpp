// Collecting Numbers | https://cses.fi/problemset/task/2216/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n; std::cin >> n;
    std::vector<int> position(n + 1);
    for (int i = 0, value; i < n; ++i) { std::cin >> value; position[value] = i; }
    int rounds = 1;
    for (int value = 2; value <= n; ++value) if (position[value] < position[value - 1]) ++rounds;
    std::cout << rounds << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
