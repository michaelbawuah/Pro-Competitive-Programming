// X-Sum | https://codeforces.com/problemset/problem/1676/D
// Time: O(n m) per case; extra space: O(n m).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n,m; std::cin >> n >> m;
        std::vector<std::vector<long long>> grid(n,std::vector<long long>(m));
        std::vector<long long> rising(n+m),falling(n+m);
        for (int i=0;i<n;++i) for (int j=0;j<m;++j) { std::cin >> grid[i][j]; rising[i+j]+=grid[i][j]; falling[i-j+m]+=grid[i][j]; }
        long long answer=0;
        for (int i=0;i<n;++i) for (int j=0;j<m;++j) answer=std::max(answer,rising[i+j]+falling[i-j+m]-grid[i][j]);
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
