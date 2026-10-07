// Tap Dance | https://atcoder.jp/contests/abc141/tasks/abc141_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    bool ok=true;
    for(std::size_t i=0;i<s.size();++i)if(s[i]==(i%2?'R':'L'))ok=false;
    std::cout<<(ok?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
