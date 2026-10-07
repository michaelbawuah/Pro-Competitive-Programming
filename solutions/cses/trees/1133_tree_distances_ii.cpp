// Tree Distances II | https://cses.fi/problemset/task/1133/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::vector<int>>adj(n);for(int i=1;i<n;++i){int a,b;std::cin>>a>>b;--a;--b;adj[a].push_back(b);adj[b].push_back(a);}std::vector<int>parent(n,-1),order{0},depth(n),size(n,1);for(std::size_t i=0;i<order.size();++i){int v=order[i];for(int u:adj[v])if(u!=parent[v]){parent[u]=v;depth[u]=depth[v]+1;order.push_back(u);}}std::vector<long long>ans(n);for(int d:depth)ans[0]+=d;for(int i=n-1;i>0;--i){int v=order[i];size[parent[v]]+=size[v];}for(int v:order)if(v)ans[v]=ans[parent[v]]+n-2*size[v];for(auto x:ans)std::cout<<x<<' ';std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
