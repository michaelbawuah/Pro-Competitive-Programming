// Forest Queries | https://cses.fi/problemset/task/1652/
// Time: O(n^2+q); extra space: O(n^2).
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,q;std::cin>>n>>q;std::vector<std::vector<int>>sum(n+1,std::vector<int>(n+1));for(int r=1;r<=n;++r){std::string row;std::cin>>row;for(int c=1;c<=n;++c)sum[r][c]=sum[r-1][c]+sum[r][c-1]-sum[r-1][c-1]+(row[c-1]=='*');}while(q--){int y1,x1,y2,x2;std::cin>>y1>>x1>>y2>>x2;std::cout<<sum[y2][x2]-sum[y1-1][x2]-sum[y2][x1-1]+sum[y1-1][x1-1]<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
