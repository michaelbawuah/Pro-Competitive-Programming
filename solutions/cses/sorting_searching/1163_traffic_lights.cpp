// Traffic Lights | https://cses.fi/problemset/task/1163/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <set>
#include <iterator>
#include <algorithm>



void solve() {
    int length, n; std::cin >> length >> n;
    std::set<int> positions{0, length};
    std::multiset<int> gaps{length};
    for (int i = 0, position; i < n; ++i) {
        std::cin >> position;
        auto right = positions.upper_bound(position);
        int high = *right, low = *std::prev(right);
        gaps.erase(gaps.find(high - low));
        gaps.insert(position - low); gaps.insert(high - position);
        positions.insert(position);
        std::cout << *gaps.rbegin() << (i + 1 == n ? '\n' : ' ');
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
