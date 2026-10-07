// GeT AC | https://atcoder.jp/contests/abc122/tasks/abc122_c
// Time: O(n+q); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,q;
    std::string s;
    std::cin>>n>>q>>s;
    std::vector<int>prefix(n+1);
    for(int i=1;i<n;++i)prefix[i+1]=prefix[i]+(s[i-1]=='A'&&s[i]=='C');
    while(q--) {
        int l,r;
        std::cin>>l>>r;
        std::cout<<prefix[r]-prefix[l]<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
