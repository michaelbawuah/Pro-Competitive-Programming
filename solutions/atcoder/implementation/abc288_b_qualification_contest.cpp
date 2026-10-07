// Qualification Contest | https://atcoder.jp/contests/abc288/tasks/abc288_b
// Time: O(NL+K L log K); extra space: O(NL).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;std::vector<std::string>s(n);for(auto&x:s)std::cin>>x;std::sort(s.begin(),s.begin()+k);for(int i=0;i<k;++i)std::cout<<s[i]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
