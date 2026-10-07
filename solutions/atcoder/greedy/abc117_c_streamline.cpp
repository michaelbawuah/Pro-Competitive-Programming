// Streamline | https://atcoder.jp/contests/abc117/tasks/abc117_c
// Time: O(M log M); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<int>x(m),gaps;
    for(int&v:x)std::cin>>v;
    std::sort(x.begin(),x.end());
    for(int i=1;i<m;++i)gaps.push_back(x[i]-x[i-1]);
    std::sort(gaps.begin(),gaps.end());
    int ans=0;
    for(int i=0;i<m-n;++i)ans+=gaps[i];
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
