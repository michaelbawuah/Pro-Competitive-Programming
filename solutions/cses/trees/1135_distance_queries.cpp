// Distance Queries | https://cses.fi/problemset/task/1135/
// Time: O((n+q) log n); extra space: O(n log n).
#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n,q;
    std::cin>>n>>q;
    std::vector<std::vector<int>>adj(n);
    for(int i=1;i<n;++i) {
        int a,b;
        std::cin>>a>>b;
        --a;
        --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int levels=1;
    while((1<<levels)<=n)++levels;
    std::vector<std::vector<int>>up(levels,std::vector<int>(n));
    std::vector<int>depth(n),order{0};
    for(std::size_t i=0;i<order.size();++i) {
        int v=order[i];
        for(int u:adj[v])if(u!=up[0][v]) {
            up[0][u]=v;
            depth[u]=depth[v]+1;
            order.push_back(u);
        }
    }
    for(int k=1;k<levels;++k)for(int v=0;v<n;++v)up[k][v]=up[k-1][up[k-1][v]];
    while(q--) {
        int a,b;
        std::cin>>a>>b;
        --a;
        --b;
        int total=depth[a]+depth[b];
        if(depth[a]<depth[b])std::swap(a,b);
        int diff=depth[a]-depth[b];
        for(int k=0;k<levels;++k)if(diff>>k&1)a=up[k][a];
        if(a!=b) {
            for(int k=levels-1;k>=0;--k)if(up[k][a]!=up[k][b]) {
                a=up[k][a];
                b=up[k][b];
            }
            a=up[0][a];
        }
        std::cout<<total-2*depth[a]<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
