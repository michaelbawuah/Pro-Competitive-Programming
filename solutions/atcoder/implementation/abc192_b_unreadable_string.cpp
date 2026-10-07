// uNrEaDaBlE sTrInG | https://atcoder.jp/contests/abc192/tasks/abc192_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool ok=true;for(std::size_t i=0;i<s.size();++i)ok=ok&&(i%2?(s[i]>='A'&&s[i]<='Z'):(s[i]>='a'&&s[i]<='z'));std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
