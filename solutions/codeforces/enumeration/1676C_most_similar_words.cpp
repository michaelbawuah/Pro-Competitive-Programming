// Most Similar Words | https://codeforces.com/problemset/problem/1676/C
// Time: O(n^2 m) per case; extra space: O(n m).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n,m; std::cin >> n >> m; std::vector<std::string> words(n);
        for (auto& word:words) std::cin >> word;
        int answer=1000000;
        for (int i=0;i<n;++i) for (int j=i+1;j<n;++j) {
            int distance=0; for (int k=0;k<m;++k) distance+=std::abs(words[i][k]-words[j][k]);
            answer=std::min(answer,distance);
        }
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
