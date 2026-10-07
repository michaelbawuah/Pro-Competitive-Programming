// Capitalized? | https://atcoder.jp/contests/abc338/tasks/abc338_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool ok='A'<=s[0]&&s[0]<='Z';for(std::size_t i=1;i<s.size();++i)ok=ok&&'a'<=s[i]&&s[i]<='z';std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
