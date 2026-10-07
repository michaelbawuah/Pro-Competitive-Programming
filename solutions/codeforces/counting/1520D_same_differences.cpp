// Same Differences | https://codeforces.com/problemset/problem/1520/D
// Time: O(n log n) per case; extra space: O(n).
#include <iostream>
#include <map>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::map<long long,long long> frequency; long long answer=0;
        for (int i=0;i<n;++i) { long long value; std::cin >> value; answer+=frequency[value-i]++; }
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
