// chess960 | https://atcoder.jp/contests/abc297/tasks/abc297_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::vector<int>bishop,rook;int king=-1;for(int i=0;i<8;++i){if(s[i]=='B')bishop.push_back(i);if(s[i]=='R')rook.push_back(i);if(s[i]=='K')king=i;}bool ok=bishop[0]%2!=bishop[1]%2&&rook[0]<king&&king<rook[1];std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
