// 754 | https://atcoder.jp/contests/abc114/tasks/abc114_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>



void solve() {
    std::string s;std::cin>>s;int ans=1000;for(std::size_t i=0;i+2<s.size();++i)ans=std::min(ans,std::abs(std::stoi(s.substr(i,3))-753));std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
