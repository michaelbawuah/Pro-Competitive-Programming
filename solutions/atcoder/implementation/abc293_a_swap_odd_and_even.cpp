// Swap Odd and Even | https://atcoder.jp/contests/abc293/tasks/abc293_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;for(std::size_t i=0;i<s.size();i+=2)std::swap(s[i],s[i+1]);std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
