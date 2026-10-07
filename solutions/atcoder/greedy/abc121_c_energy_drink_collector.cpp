// Energy Drink Collector | https://atcoder.jp/contests/abc121/tasks/abc121_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>



void solve() {
    int n;long long need;std::cin>>n>>need;std::vector<std::pair<long long,long long>>shops(n);for(auto&[cost,count]:shops)std::cin>>cost>>count;std::sort(shops.begin(),shops.end());long long ans=0;for(auto[cost,count]:shops){long long take=std::min(need,count);ans+=take*cost;need-=take;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
