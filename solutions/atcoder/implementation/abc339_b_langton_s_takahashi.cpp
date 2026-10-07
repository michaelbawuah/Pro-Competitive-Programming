// Langton's Takahashi | https://atcoder.jp/contests/abc339/tasks/abc339_b
// Time: O(N+HW); extra space: O(HW).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w,n;std::cin>>h>>w>>n;std::vector<std::string>grid(h,std::string(w,'.'));int r=0,c=0,d=0;int dr[]={-1,0,1,0},dc[]={0,1,0,-1};while(n--){bool white=grid[r][c]=='.';grid[r][c]=white?'#':'.';d=(d+(white?1:3))%4;r=(r+dr[d]+h)%h;c=(c+dc[d]+w)%w;}for(const auto&row:grid)std::cout<<row<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
