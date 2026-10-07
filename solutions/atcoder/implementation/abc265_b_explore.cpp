// Explore | https://atcoder.jp/contests/abc265/tasks/abc265_b
// Time: O(N+M); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;long long time;std::cin>>n>>m>>time;std::vector<long long>cost(n-1),bonus(n);for(auto&x:cost)std::cin>>x;while(m--){int room;long long value;std::cin>>room>>value;bonus[room-1]=value;}for(int i=0;i<n-1;++i){time-=cost[i];if(time<=0){std::cout<<"No\n";return;}time+=bonus[i+1];}std::cout<<"Yes\n";
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
