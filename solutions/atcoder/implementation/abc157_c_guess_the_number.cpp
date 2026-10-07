// Guess The Number | https://atcoder.jp/contests/abc157/tasks/abc157_c
// Time: O(10^N M); extra space: O(M+N).
#include <iostream>
#include <string>
#include <utility>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::pair<int,int>>constraints(m);for(auto&[s,c]:constraints)std::cin>>s>>c;for(int value=0;value<1000;++value){std::string s=std::to_string(value);if(static_cast<int>(s.size())!=n)continue;bool ok=true;for(auto[pos,c]:constraints)ok=ok&&s[pos-1]-'0'==c;if(ok){std::cout<<value<<'\n';return;}}std::cout<<-1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
