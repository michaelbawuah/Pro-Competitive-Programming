// Long Jumps | https://codeforces.com/problemset/problem/1472/C
// Time: O(n) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<long long> score(n);
        for (auto& x : score) std::cin >> x;
        long long answer=0;
        for (int i=n-1;i>=0;--i) {
            const long long next=i+score[i];
            if (next<n) score[i]+=score[static_cast<int>(next)];
            answer=std::max(answer,score[i]);
        }
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
