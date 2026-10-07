// Christmas Eve | https://atcoder.jp/contests/abc115/tasks/abc115_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<int>h(n);
    for(int&x:h)std::cin>>x;
    std::sort(h.begin(),h.end());
    int ans=1000000000;
    for(int i=0;i+k<=n;++i)ans=std::min(ans,h[i+k-1]-h[i]);
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
