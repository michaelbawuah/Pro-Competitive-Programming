// Distance Between Tokens | https://atcoder.jp/contests/abc253/tasks/abc253_b
// Time: O(HW); extra space: O(W).
#include <cstdlib>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

void solve() {
    int h,w;
    std::cin>>h>>w;
    std::vector<std::pair<int,int>>position;
    for(int i=0;i<h;++i) {
        std::string s;
        std::cin>>s;
        for(int j=0;j<w;++j)if(s[j]=='o')position.push_back({i,j});
    }
    std::cout<<std::abs(position[0].first-position[1].first)+std::abs(position[0].second-position[1].second)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
