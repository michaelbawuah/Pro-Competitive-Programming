// Tenki | https://atcoder.jp/contests/abc139/tasks/abc139_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;int ans=0;for(int i=0;i<3;++i)ans+=s[i]==t[i];std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
