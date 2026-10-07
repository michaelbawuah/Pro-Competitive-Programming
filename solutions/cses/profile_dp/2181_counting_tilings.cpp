// Counting Tilings | https://cses.fi/problemset/task/2181/
// Time: O(m 4^n); extra space: O(4^n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;int states=1<<n;std::vector<std::vector<int>>next(states);for(int mask=0;mask<states;++mask){auto fill=[&](auto&& self,int row,int carry)->void{if(row==n){next[mask].push_back(carry);return;}if(mask>>row&1){self(self,row+1,carry);return;}self(self,row+1,carry|(1<<row));if(row+1<n&&!(mask>>(row+1)&1))self(self,row+2,carry);};fill(fill,0,0);}const int mod=1000000007;std::vector<int>dp(states),ndp(states);dp[0]=1;for(int col=0;col<m;++col){std::fill(ndp.begin(),ndp.end(),0);for(int mask=0;mask<states;++mask)for(int carry:next[mask])ndp[carry]=(ndp[carry]+dp[mask])%mod;dp.swap(ndp);}std::cout<<dp[0]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
