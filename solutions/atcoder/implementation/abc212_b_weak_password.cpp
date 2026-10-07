// Weak Password | https://atcoder.jp/contests/abc212/tasks/abc212_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool same=true,consecutive=true;for(int i=1;i<4;++i){same=same&&s[i]==s[0];consecutive=consecutive&&(s[i]-'0')==(s[i-1]-'0'+1)%10;}std::cout<<(same||consecutive?"Weak":"Strong")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
