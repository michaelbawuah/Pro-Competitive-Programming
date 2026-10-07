// Switches | https://atcoder.jp/contests/abc128/tasks/abc128_c
// Time: O(2^N M N); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<int>connections(m),parity(m);
    for(int&i:connections) {
        int k;
        std::cin>>k;
        while(k--) {
            int s;
            std::cin>>s;
            i|=1<<(s-1);
        }
    }
    for(int&i:parity)std::cin>>i;
    int ans=0;
    for(int mask=0;mask<(1<<n);++mask) {
        bool ok=true;
        for(int i=0;i<m;++i) {
            int count=0;
            for(int j=0;j<n;++j)count+=((mask&connections[i])>>j)&1;
            ok=ok&&(count%2==parity[i]);
        }
        ans+=ok;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
