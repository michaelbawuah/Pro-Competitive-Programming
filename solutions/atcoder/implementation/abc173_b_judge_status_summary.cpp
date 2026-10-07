// Judge Status Summary | https://atcoder.jp/contests/abc173/tasks/abc173_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>labels{"AC","WA","TLE","RE"};std::vector<int>count(4);while(n--){std::string s;std::cin>>s;for(int i=0;i<4;++i)if(s==labels[i])++count[i];}for(int i=0;i<4;++i)std::cout<<labels[i]<<" x "<<count[i]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
