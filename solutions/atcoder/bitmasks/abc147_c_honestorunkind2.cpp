// HonestOrUnkind2 | https://atcoder.jp/contests/abc147/tasks/abc147_c
// Time: O(2^n n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::vector<std::pair<int,int>>>claims(n);
    for(auto&v:claims) {
        int k;
        std::cin>>k;
        while(k--) {
            int x,y;
            std::cin>>x>>y;
            v.push_back({x-1,y});
        }
    }
    int ans=0;
    for(int mask=0;mask<(1<<n);++mask) {
        int count=0;
        bool ok=true;
        for(int i=0;i<n;++i)if(mask>>i&1) {
            ++count;
            for(auto[x,y]:claims[i])if(((mask>>x)&1)!=y)ok=false;
        }
        if(ok)ans=std::max(ans,count);
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
