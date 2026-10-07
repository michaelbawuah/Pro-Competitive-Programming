// Strange Bank | https://atcoder.jp/contests/abc099/tasks/abc099_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>coins{1},dp(n+1,n+1);for(int base:{6,9})for(int v=base;v<=n;v*=base)coins.push_back(v);dp[0]=0;for(int s=1;s<=n;++s)for(int c:coins)if(c<=s)dp[s]=std::min(dp[s],dp[s-c]+1);std::cout<<dp[n]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
