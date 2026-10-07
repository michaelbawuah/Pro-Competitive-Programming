// Takahashi's Information | https://atcoder.jp/contests/abc088/tasks/abc088_c
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int c[3][3];
    for(auto&row:c)for(int&v:row)std::cin>>v;
    bool ok=true;
    for(int i=0;i<3;++i)for(int j=0;j<3;++j)ok=ok&&(c[i][j]-c[i][0]==c[0][j]-c[0][0]);
    std::cout<<(ok?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
