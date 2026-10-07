// Triple | https://codeforces.com/problemset/problem/1669/B
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> frequency(n+1); int answer=-1;
        for (int i=0;i<n;++i) { int value; std::cin >> value; if (++frequency[value]==3) answer=value; }
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
