// Spread | https://atcoder.jp/contests/abc329/tasks/abc329_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;for(std::size_t i=0;i<s.size();++i)std::cout<<s[i]<<(i+1==s.size()?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
