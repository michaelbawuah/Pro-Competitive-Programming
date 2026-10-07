// Rectangle Detection | https://atcoder.jp/contests/abc269/tasks/abc269_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int top=11,bottom=0,left=11,right=0;for(int i=1;i<=10;++i){std::string s;std::cin>>s;for(int j=1;j<=10;++j)if(s[j-1]=='#'){top=std::min(top,i);bottom=std::max(bottom,i);left=std::min(left,j);right=std::max(right,j);}}std::cout<<top<<' '<<bottom<<'\n'<<left<<' '<<right<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
