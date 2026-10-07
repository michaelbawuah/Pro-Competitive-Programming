// Everyone is Friends | https://atcoder.jp/contests/abc272/tasks/abc272_b
// Time: O(sum(k_i^2)+N^2); extra space: O(N^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<std::vector<bool>>met(n,std::vector<bool>(n));
    while(m--) {
        int k;
        std::cin>>k;
        std::vector<int>guest(k);
        for(int&v:guest) {
            std::cin>>v;
            --v;
        }
        for(int u:guest)for(int v:guest)met[u][v]=true;
    }
    bool ok=true;
    for(int i=0;i<n;++i)for(int j=0;j<i;++j)ok=ok&&met[i][j];
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
