// Split? | https://atcoder.jp/contests/abc267/tasks/abc267_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int column[]={3,2,4,1,3,5,0,2,4,6};
    std::vector<bool>standing(7);
    for(int i=0;i<10;++i)if(s[i]=='1')standing[column[i]]=true;
    bool split=false;
    for(int l=0;l<7;++l)for(int r=l+2;r<7;++r)if(standing[l]&&standing[r])for(int m=l+1;m<r;++m)if(!standing[m])split=true;
    std::cout<<(s[0]=='0'&&split?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
