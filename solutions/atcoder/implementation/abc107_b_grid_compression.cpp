// Grid Compression | https://atcoder.jp/contests/abc107/tasks/abc107_b
// Time: O(H W); extra space: O(H W).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w;std::cin>>h>>w;std::vector<std::string>grid(h);std::vector<bool>row(h),col(w);for(int i=0;i<h;++i){std::cin>>grid[i];for(int j=0;j<w;++j)if(grid[i][j]=='#')row[i]=col[j]=true;}for(int i=0;i<h;++i)if(row[i]){for(int j=0;j<w;++j)if(col[j])std::cout<<grid[i][j];std::cout<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
