// Strings with the Same Length | https://atcoder.jp/contests/abc148/tasks/abc148_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s,t;std::cin>>n>>s>>t;for(int i=0;i<n;++i)std::cout<<s[i]<<t[i];std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
