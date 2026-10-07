// Many Requirements | https://atcoder.jp/contests/abc165/tasks/abc165_c
// Time: O(Q binomial(N+M-1,N)); extra space: O(N+Q).
#include <algorithm>
#include <array>
#include <iostream>
#include <vector>



void solve() {
    int n,m,q;std::cin>>n>>m>>q;std::vector<std::array<int,4>>rules(q);for(auto&r:rules)for(int&x:r)std::cin>>x;std::vector<int>a(n);int ans=0;auto dfs=[&](auto&& self,int pos,int low)->void{if(pos==n){int score=0;for(auto r:rules)if(a[r[1]-1]-a[r[0]-1]==r[2])score+=r[3];ans=std::max(ans,score);return;}for(int v=low;v<=m;++v){a[pos]=v;self(self,pos+1,v);}};dfs(dfs,0,1);std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
