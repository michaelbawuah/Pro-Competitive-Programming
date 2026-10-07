// ID | https://atcoder.jp/contests/abc113/tasks/abc113_c
// Time: O(M log M); extra space: O(M).
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<std::tuple<int,int,int>>cities;
    for(int i=0;i<m;++i) {
        int p,y;
        std::cin>>p>>y;
        cities.emplace_back(p,y,i);
    }
    std::sort(cities.begin(),cities.end());
    std::vector<std::pair<int,int>>answer(m);
    int prev=0,rank=0;
    for(auto [p,y,i]:cities) {
        (void)y;
        if(p!=prev)rank=0;
        answer[i]={p,++rank};
        prev=p;
    }
    for(auto [p,k]:answer)std::cout<<std::setfill('0')<<std::setw(6)<<p<<std::setw(6)<<k<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
