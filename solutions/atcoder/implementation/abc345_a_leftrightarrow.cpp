// Leftrightarrow | https://atcoder.jp/contests/abc345/tasks/abc345_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    bool ok=s.front()=='<'&&s.back()=='>';
    for(std::size_t i=1;i+1<s.size();++i)ok=ok&&s[i]=='=';
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
