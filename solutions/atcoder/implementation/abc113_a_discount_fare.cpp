// Discount Fare | https://atcoder.jp/contests/abc113/tasks/abc113_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x,y;
    std::cin>>x>>y;
    std::cout<<(x+y/2)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
