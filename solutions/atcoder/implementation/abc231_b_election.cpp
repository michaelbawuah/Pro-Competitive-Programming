// Election | https://atcoder.jp/contests/abc231/tasks/abc231_b
// Time: O(n L log n); extra space: O(n L).
#include <iostream>
#include <map>
#include <string>



void solve() {
    int n;std::cin>>n;std::map<std::string,int>counts;while(n--){std::string s;std::cin>>s;++counts[s];}int best=0;std::string winner;for(const auto&entry:counts)if(entry.second>best){best=entry.second;winner=entry.first;}std::cout<<winner<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
