// Bombs | https://atcoder.jp/contests/abc295/tasks/abc295_b
// Time: O(R^2 C^2); extra space: O(RC).
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int r,c;std::cin>>r>>c;std::vector<std::string>original(r);for(auto&s:original)std::cin>>s;auto result=original;for(int i=0;i<r;++i)for(int j=0;j<c;++j)if('1'<=original[i][j]&&original[i][j]<='9'){int power=original[i][j]-'0';for(int x=0;x<r;++x)for(int y=0;y<c;++y)if(std::abs(x-i)+std::abs(y-j)<=power)result[x][y]='.';}for(const auto&s:result)std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
