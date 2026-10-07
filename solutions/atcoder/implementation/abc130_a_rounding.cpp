// Rounding | https://atcoder.jp/contests/abc130/tasks/abc130_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x,a;
    std::cin>>x>>a;
    std::cout<<(x<a?0:10)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
