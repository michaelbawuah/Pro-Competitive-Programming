// Job Assignment | https://atcoder.jp/contests/abc194/tasks/abc194_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n),b(n);
    for(int i=0;i<n;++i)std::cin>>a[i]>>b[i];
    int ans=200001;
    for(int i=0;i<n;++i)for(int j=0;j<n;++j)ans=std::min(ans,i==j?a[i]+b[j]:std::max(a[i],b[j]));
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
