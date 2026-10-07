// Spoiler | https://atcoder.jp/contests/abc344/tasks/abc344_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    auto first=s.find('|'),last=s.rfind('|');
    std::cout<<s.substr(0,first)<<s.substr(last+1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
