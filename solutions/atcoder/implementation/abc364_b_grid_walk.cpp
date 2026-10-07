// Grid Walk | https://atcoder.jp/contests/abc364/tasks/abc364_b
// Time: O(HW+|X|); extra space: O(HW+|X|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w,r,c;std::cin>>h>>w>>r>>c;--r;--c;std::vector<std::string>grid(h);for(auto&s:grid)std::cin>>s;std::string moves,order="LRUD";std::cin>>moves;int dr[]={0,0,-1,1},dc[]={-1,1,0,0};for(char move:moves){auto d=order.find(move);int nr=r+dr[d],nc=c+dc[d];if(0<=nr&&nr<h&&0<=nc&&nc<w&&grid[nr][nc]=='.'){r=nr;c=nc;}}std::cout<<r+1<<' '<<c+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
