// Slimes | https://atcoder.jp/contests/abc143/tasks/abc143_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    int ans=1;
    for(int i=1;i<n;++i)ans+=s[i]!=s[i-1];
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
