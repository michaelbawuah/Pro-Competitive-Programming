// Making Triangle | https://atcoder.jp/contests/abc175/tasks/abc175_b
// Time: O(n^3); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>a(n);
    for(auto&x:a)std::cin>>x;
    std::sort(a.begin(),a.end());
    int ans=0;
    for(int i=0;i<n;++i)for(int j=i+1;j<n;++j)for(int k=j+1;k<n;++k)ans+=a[i]<a[j]&&a[j]<a[k]&&a[i]+a[j]>a[k];
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
