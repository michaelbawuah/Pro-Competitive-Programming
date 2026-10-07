// Similar String | https://atcoder.jp/contests/abc303/tasks/abc303_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s,t;
    std::cin>>n>>s>>t;
    auto normalize=[](char c) {
        return c=='1'?'l':c=='0'?'o':c;
    };
    bool ok=true;
    for(int i=0;i<n;++i)ok=ok&&normalize(s[i])==normalize(t[i]);
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
