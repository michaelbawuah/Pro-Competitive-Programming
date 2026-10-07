// Boats Competition | https://codeforces.com/problemset/problem/1399/C
// Time: O(n^2) per case; extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int n; std::cin >> n; std::vector<int> weights(n);
        for (int& x : weights) std::cin >> x;
        std::sort(weights.begin(),weights.end()); int answer = 0;
        for (int target = 2; target <= 2*n; ++target) {
            int left=0,right=n-1,pairs=0;
            while (left < right) {
                const int sum=weights[left]+weights[right];
                if (sum==target) { ++pairs; ++left; --right; }
                else if (sum<target) ++left;
                else --right;
            }
            answer=std::max(answer,pairs);
        }
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
