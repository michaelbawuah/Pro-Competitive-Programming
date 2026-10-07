// ATCoder | https://atcoder.jp/contests/abc122/tasks/abc122_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int run=0,ans=0;for(char c:s){run=std::string("ACGT").find(c)!=std::string::npos?run+1:0;ans=std::max(ans,run);}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
