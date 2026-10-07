// Caesar Cipher | https://atcoder.jp/contests/abc232/tasks/abc232_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;int shift=(t[0]-s[0]+26)%26;bool ok=true;for(std::size_t i=0;i<s.size();++i)ok=ok&&(t[i]-s[i]+26)%26==shift;std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
