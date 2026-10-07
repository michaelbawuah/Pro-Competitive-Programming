// Alternately | https://atcoder.jp/contests/abc296/tasks/abc296_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;bool ok=true;for(int i=1;i<n;++i)ok=ok&&s[i]!=s[i-1];std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
