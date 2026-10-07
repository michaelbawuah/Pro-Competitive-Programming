// Hotel Queries | https://cses.fi/problemset/task/1143/
// Time: O(n+m log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    int size=1;
    while(size<n)size*=2;
    std::vector<int>tree(2*size);
    for(int i=0;i<n;++i)std::cin>>tree[size+i];
    for(int i=size-1;i>0;--i)tree[i]=std::max(tree[2*i],tree[2*i+1]);
    while(m--) {
        int need;
        std::cin>>need;
        if(tree[1]<need) {
            std::cout<<0<<' ';
            continue;
        }
        int node=1;
        while(node<size)node=tree[2*node]>=need?2*node:2*node+1;
        std::cout<<node-size+1<<' ';
        tree[node]-=need;
        for(node/=2;node>0;node/=2)tree[node]=std::max(tree[2*node],tree[2*node+1]);
    }
    std::cout<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
