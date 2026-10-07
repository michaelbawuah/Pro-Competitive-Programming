// +-x | https://atcoder.jp/contests/abc137/tasks/abc137_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    std::cout<<(std::max({a+b,a-b,a*b}))<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
