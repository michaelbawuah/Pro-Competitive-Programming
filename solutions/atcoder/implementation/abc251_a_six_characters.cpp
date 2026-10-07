// Six Characters | https://atcoder.jp/contests/abc251/tasks/abc251_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;for(int i=0;i<6;++i)std::cout<<s[i%s.size()];std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
