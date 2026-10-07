// Subordinates | https://cses.fi/problemset/task/1674/
// Time: O(n); extra space: O(n).
#include <iostream>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> children(n);
    for (int employee = 1; employee < n; ++employee) {
        int boss;
        std::cin >> boss;
        children[boss - 1].push_back(employee);
    }
    std::vector<int> order{0}, subtree(n, 1);
    for (std::size_t index = 0; index < order.size(); ++index) {
        const int vertex = order[index];
        for (int child : children[vertex]) order.push_back(child);
    }
    for (auto it = order.rbegin(); it != order.rend(); ++it) {
        for (int child : children[*it]) subtree[*it] += subtree[child];
    }
    for (int size : subtree) std::cout << size - 1 << ' ';
    std::cout << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
