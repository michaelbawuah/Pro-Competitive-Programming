// Gentle Pairs | https://atcoder.jp/contests/abc187/tasks/abc187_b
// Time: O(n^2); extra space: O(n).
#include <cstdlib>
#include <iostream>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>x(n),y(n);for(int i=0;i<n;++i)std::cin>>x[i]>>y[i];int ans=0;for(int i=0;i<n;++i)for(int j=0;j<i;++j)ans+=std::abs(y[i]-y[j])<=std::abs(x[i]-x[j]);std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
