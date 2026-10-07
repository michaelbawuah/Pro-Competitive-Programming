// Piano 2 | https://atcoder.jp/contests/abc355/tasks/abc355_b
// Time: O((N+M) log(N+M)); extra space: O(N+M).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::pair<int,bool>>value;for(int i=0;i<n+m;++i){int x;std::cin>>x;value.push_back({x,i<n});}std::sort(value.begin(),value.end());bool found=false;for(std::size_t i=1;i<value.size();++i)found=found||(value[i-1].second&&value[i].second);std::cout<<(found?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
