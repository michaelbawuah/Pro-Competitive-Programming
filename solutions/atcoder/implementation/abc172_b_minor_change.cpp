// Minor Change | https://atcoder.jp/contests/abc172/tasks/abc172_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t;
    std::cin>>s>>t;
    int ans=0;
    for(std::size_t i=0;i<s.size();++i)ans+=s[i]!=t[i];
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
