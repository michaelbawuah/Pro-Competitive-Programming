// Default Price | https://atcoder.jp/contests/abc308/tasks/abc308_b
// Time: O((N+M)L log M); extra space: O((N+M)L).
#include <iostream>
#include <map>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::string>eaten(n),color(m);for(auto&s:eaten)std::cin>>s;for(auto&s:color)std::cin>>s;int fallback;std::cin>>fallback;std::map<std::string,int>price;for(const auto&s:color){int value;std::cin>>value;price[s]=value;}int total=0;for(const auto&s:eaten){auto it=price.find(s);total+=it==price.end()?fallback:it->second;}std::cout<<total<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
