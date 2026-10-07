// The Number of Even Pairs | https://atcoder.jp/contests/abc159/tasks/abc159_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,m;
    std::cin>>n>>m;
    std::cout<<(n*(n-1)/2+m*(m-1)/2)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
