// First ABC | https://atcoder.jp/contests/abc311/tasks/abc311_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,mask=0;std::string s;std::cin>>n>>s;for(int i=0;i<n;++i){mask|=1<<(s[i]-'A');if(mask==7){std::cout<<i+1<<'\n';break;}}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
