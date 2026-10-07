// typo | https://atcoder.jp/contests/abc221/tasks/abc221_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;bool ok=s==t;for(std::size_t i=1;i<s.size();++i){std::swap(s[i-1],s[i]);ok=ok||s==t;std::swap(s[i-1],s[i]);}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
