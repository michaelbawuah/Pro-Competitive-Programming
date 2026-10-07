// Same Map in the RPG World | https://atcoder.jp/contests/abc300/tasks/abc300_b
// Time: O(H^2 W^2); extra space: O(HW).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w;std::cin>>h>>w;std::vector<std::string>a(h),b(h);for(auto&s:a)std::cin>>s;for(auto&s:b)std::cin>>s;bool possible=false;for(int dr=0;dr<h;++dr)for(int dc=0;dc<w;++dc){bool ok=true;for(int i=0;i<h;++i)for(int j=0;j<w;++j)ok=ok&&a[(i+dr)%h][(j+dc)%w]==b[i][j];possible=possible||ok;}std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
