// Registration | https://atcoder.jp/contests/abc167/tasks/abc167_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t;
    std::cin>>s>>t;
    std::cout<<(t.substr(0,s.size())==s?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
