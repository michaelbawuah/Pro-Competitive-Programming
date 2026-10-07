// Rally | https://atcoder.jp/contests/abc156/tasks/abc156_c
// Time: O(100 n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>x(n);for(int&v:x)std::cin>>v;int ans=1000000000;for(int p=1;p<=100;++p){int cost=0;for(int v:x)cost+=(v-p)*(v-p);ans=std::min(ans,cost);}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
