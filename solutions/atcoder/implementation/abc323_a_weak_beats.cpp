// Weak Beats | https://atcoder.jp/contests/abc323/tasks/abc323_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool ok=true;for(int i=1;i<16;i+=2)ok=ok&&s[i]=='0';std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
