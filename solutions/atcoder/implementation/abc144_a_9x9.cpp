// 9x9 | https://atcoder.jp/contests/abc144/tasks/abc144_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    std::cout<<(a<=9&&b<=9?a*b:-1)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
