// Games | https://codeforces.com/problemset/problem/268/A
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;
    std::cin >> n;
    std::vector<int> home(n), away(n);
    for (int i = 0; i < n; ++i) std::cin >> home[i] >> away[i];
    int changes = 0;
    for (int host = 0; host < n; ++host)
        for (int visitor = 0; visitor < n; ++visitor)
            changes += host != visitor && home[host] == away[visitor];
    std::cout << changes << '\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
