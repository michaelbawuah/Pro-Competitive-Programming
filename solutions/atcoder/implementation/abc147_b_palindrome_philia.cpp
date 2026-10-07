// Palindrome-philia | https://atcoder.jp/contests/abc147/tasks/abc147_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int ans=0;for(std::size_t i=0;i<s.size()/2;++i)ans+=s[i]!=s[s.size()-1-i];std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
