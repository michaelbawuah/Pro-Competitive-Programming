// Trick Taking | https://atcoder.jp/contests/abc299/tasks/abc299_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,t;std::cin>>n>>t;std::vector<int>color(n),rank(n);for(int&x:color)std::cin>>x;for(int&x:rank)std::cin>>x;if(std::find(color.begin(),color.end(),t)==color.end())t=color[0];int winner=-1;for(int i=0;i<n;++i)if(color[i]==t&&(winner==-1||rank[i]>rank[winner]))winner=i;std::cout<<winner+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
