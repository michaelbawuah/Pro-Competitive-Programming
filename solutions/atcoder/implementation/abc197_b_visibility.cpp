// Visibility | https://atcoder.jp/contests/abc197/tasks/abc197_b
// Time: O(H W); extra space: O(H W).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w,x,y;std::cin>>h>>w>>x>>y;--x;--y;std::vector<std::string>g(h);for(auto&r:g)std::cin>>r;int ans=1;int dx[4]={1,-1,0,0},dy[4]={0,0,1,-1};for(int d=0;d<4;++d){int r=x+dx[d],c=y+dy[d];while(r>=0&&r<h&&c>=0&&c<w&&g[r][c]=='.'){++ans;r+=dx[d];c+=dy[d];}}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
