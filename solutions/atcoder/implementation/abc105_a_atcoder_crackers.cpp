// AtCoder Crackers | https://atcoder.jp/contests/abc105/tasks/abc105_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,k;
    std::cin>>n>>k;
    std::cout<<(n%k==0?0:1)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
