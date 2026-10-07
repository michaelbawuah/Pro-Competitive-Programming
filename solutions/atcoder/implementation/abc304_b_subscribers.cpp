// Subscribers | https://atcoder.jp/contests/abc304/tasks/abc304_b
// Time: O(number of digits); extra space: O(number of digits).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;for(std::size_t i=3;i<s.size();++i)s[i]='0';std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
