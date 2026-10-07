// Sandwich Number | https://atcoder.jp/contests/abc281/tasks/abc281_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool ok=s.size()==8;if(ok){ok='A'<=s[0]&&s[0]<='Z'&&'A'<=s[7]&&s[7]<='Z'&&s[1]!='0';for(int i=1;i<=6;++i)ok=ok&&'0'<=s[i]&&s[i]<='9';}std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
