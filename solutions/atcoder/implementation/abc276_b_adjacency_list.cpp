// Adjacency List | https://atcoder.jp/contests/abc276/tasks/abc276_b
// Time: O(N+M log M); extra space: O(N+M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::vector<int>>adj(n);while(m--){int a,b;std::cin>>a>>b;adj[a-1].push_back(b);adj[b-1].push_back(a);}for(auto&neighbors:adj){std::sort(neighbors.begin(),neighbors.end());std::cout<<neighbors.size();for(int v:neighbors)std::cout<<' '<<v;std::cout<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
