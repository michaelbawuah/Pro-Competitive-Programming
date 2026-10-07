// Typical Stairs | https://atcoder.jp/contests/abc129/tasks/abc129_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<bool>bad(n+1);while(m--){int x;std::cin>>x;bad[x]=true;}std::vector<int>dp(n+1);dp[0]=1;for(int i=1;i<=n;++i)if(!bad[i]){dp[i]=dp[i-1];if(i>=2)dp[i]=(dp[i]+dp[i-2])%1000000007;}std::cout<<dp[n]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
