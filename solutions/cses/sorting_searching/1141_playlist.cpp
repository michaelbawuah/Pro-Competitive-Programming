// Playlist | https://cses.fi/problemset/task/1141/
// Time: O(n log n); extra space: O(n).
#include <iostream>
#include <map>
#include <algorithm>



void solve() {
    int n;
    std::cin >> n;
    std::map<long long, int> last;
    int left = 0, best = 0;
    for (int right = 0; right < n; ++right) {
        long long song;
        std::cin >> song;
        auto it = last.find(song);
        if (it != last.end()) left = std::max(left, it->second + 1);
        last[song] = right;
        best = std::max(best, right - left + 1);
    }
    std::cout << best << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
