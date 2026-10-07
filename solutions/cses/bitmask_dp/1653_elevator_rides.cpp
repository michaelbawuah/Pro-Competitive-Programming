// Elevator Rides | https://cses.fi/problemset/task/1653/
// Time: O(n 2^n); extra space: O(2^n).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>



void solve() {
    int n,capacity;std::cin>>n>>capacity;std::vector<int>w(n);for(int&x:w)std::cin>>x;std::vector<std::pair<int,int>>dp(1<<n,{n+1,0});dp[0]={1,0};for(int mask=1;mask<(1<<n);++mask)for(int i=0;i<n;++i)if(mask>>i&1){auto state=dp[mask^(1<<i)];if(state.second+w[i]<=capacity)state.second+=w[i];else{++state.first;state.second=w[i];}dp[mask]=std::min(dp[mask],state);}std::cout<<dp.back().first<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
