// Golden Coins | https://atcoder.jp/contests/abc160/tasks/abc160_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x;
    std::cin>>x;
    std::cout<<(x/500*1000+x%500/5*5)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
