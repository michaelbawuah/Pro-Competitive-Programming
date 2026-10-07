// Concert Tickets | https://cses.fi/problemset/task/1091/
// Time: O((n + m) log n); extra space: O(n).
#include <iostream>
#include <set>
#include <iterator>



void solve() {
    int n, m; std::cin >> n >> m;
    std::multiset<int> tickets;
    for (int i = 0, price; i < n; ++i) { std::cin >> price; tickets.insert(price); }
    while (m--) {
        int budget; std::cin >> budget;
        auto it = tickets.upper_bound(budget);
        if (it == tickets.begin()) std::cout << -1 << '\n';
        else { --it; std::cout << *it << '\n'; tickets.erase(it); }
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
