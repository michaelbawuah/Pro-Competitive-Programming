// To Infinity | https://atcoder.jp/contests/abc106/tasks/abc106_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    long long k;
    std::cin>>s>>k;
    char ans='1';
    for(std::size_t i=0;i<s.size()&&static_cast<long long>(i)<k;++i)if(s[i]!='1') {
        ans=s[i];
        break;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
