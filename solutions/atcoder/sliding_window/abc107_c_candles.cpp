// Candles | https://atcoder.jp/contests/abc107/tasks/arc101_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<long long>x(n);
    for(auto&v:x)std::cin>>v;
    long long ans=4000000000000000000LL;
    for(int i=0;i+k<=n;++i)ans=std::min(ans,x[i+k-1]-x[i]+std::min(std::abs(x[i]),std::abs(x[i+k-1])));
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
