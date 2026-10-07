// List Removals | https://cses.fi/problemset/task/1749/
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;int size=1;while(size<n)size*=2;std::vector<int>tree(size*2);for(int i=0;i<n;++i)tree[size+i]=1;for(int i=size-1;i>0;--i)tree[i]=tree[i*2]+tree[i*2+1];for(int i=0;i<n;++i){int rank;std::cin>>rank;int node=1;while(node<size){if(rank<=tree[2*node])node*=2;else{rank-=tree[2*node];node=node*2+1;}}std::cout<<a[node-size]<<' ';tree[node]=0;for(node/=2;node>0;node/=2)tree[node]=tree[2*node]+tree[2*node+1];}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
