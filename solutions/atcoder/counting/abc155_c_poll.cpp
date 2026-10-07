// Poll | https://atcoder.jp/contests/abc155/tasks/abc155_c
// Time: O(n L log n); extra space: O(n L).
#include <algorithm>
#include <iostream>
#include <map>
#include <string>

void solve() {
    int n,most=0;
    std::cin>>n;
    std::map<std::string,int>count;
    while(n--) {
        std::string s;
        std::cin>>s;
        most=std::max(most,++count[s]);
    }
    for(const auto&[s,c]:count)if(c==most)std::cout<<s<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
