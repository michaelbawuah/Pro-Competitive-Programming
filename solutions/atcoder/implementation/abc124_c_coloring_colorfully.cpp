// Coloring Colorfully | https://atcoder.jp/contests/abc124/tasks/abc124_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int mismatch=0;
    for(std::size_t i=0;i<s.size();++i)mismatch+=s[i]!=char('0'+i%2);
    std::cout<<std::min(mismatch,static_cast<int>(s.size())-mismatch)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
