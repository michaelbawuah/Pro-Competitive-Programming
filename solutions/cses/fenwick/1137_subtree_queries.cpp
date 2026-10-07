// Subtree Queries | https://cses.fi/problemset/task/1137/
// Time: O((n+q) log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n,q;
    std::cin>>n>>q;
    std::vector<long long>value(n);
    for(auto&x:value)std::cin>>x;
    std::vector<std::vector<int>>adj(n);
    for(int i=1;i<n;++i) {
        int a,b;
        std::cin>>a>>b;
        --a;
        --b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    std::vector<int>parent(n,-1),order,stack{0},pos(n),size(n,1);
    while(!stack.empty()) {
        int v=stack.back();
        stack.pop_back();
        pos[v]=static_cast<int>(order.size());
        order.push_back(v);
        for(int u:adj[v])if(u!=parent[v]) {
            parent[u]=v;
            stack.push_back(u);
        }
    }
    for(int i=n-1;i>0;--i) {
        int v=order[i];
        size[parent[v]]+=size[v];
    }
    std::vector<long long>bit(n+1);
    auto add=[&](int i,long long delta) {
        for(++i;i<=n;i+=i&-i)bit[i]+=delta;
    }
    ;
    auto prefix=[&](int i) {
        long long s=0;
        for(;i>0;i-=i&-i)s+=bit[i];
        return s;
    }
    ;
    for(int v=0;v<n;++v)add(pos[v],value[v]);
    while(q--) {
        int type,v;
        std::cin>>type>>v;
        --v;
        if(type==1) {
            long long x;
            std::cin>>x;
            add(pos[v],x-value[v]);
            value[v]=x;
        }
        else std::cout<<prefix(pos[v]+size[v])-prefix(pos[v])<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
