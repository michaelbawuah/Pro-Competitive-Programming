// Static Range Minimum Queries | https://cses.fi/problemset/task/1647/
// Time: O(n log n+q); extra space: O(n log n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n,q;std::cin>>n>>q;std::vector<int>lg(n+1);for(int i=2;i<=n;++i)lg[i]=lg[i/2]+1;std::vector<std::vector<int>>table(lg[n]+1,std::vector<int>(n));for(int&x:table[0])std::cin>>x;for(int k=1;k<=lg[n];++k)for(int i=0;i+(1<<k)<=n;++i)table[k][i]=std::min(table[k-1][i],table[k-1][i+(1<<(k-1))]);while(q--){int a,b;std::cin>>a>>b;--a;int k=lg[b-a];std::cout<<std::min(table[k][a],table[k][b-(1<<k)])<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
