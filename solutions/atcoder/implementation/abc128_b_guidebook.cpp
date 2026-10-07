// Guidebook | https://atcoder.jp/contests/abc128/tasks/abc128_b
// Time: O(n L log n); extra space: O(n L).
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::tuple<std::string,int,int>>r;for(int i=1;i<=n;++i){std::string city;int score;std::cin>>city>>score;r.emplace_back(city,-score,i);}std::sort(r.begin(),r.end());for(const auto&[city,score,id]:r){(void)city;(void)score;std::cout<<id<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
