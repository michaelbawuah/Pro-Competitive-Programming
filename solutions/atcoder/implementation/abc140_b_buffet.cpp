// Buffet | https://atcoder.jp/contests/abc140/tasks/abc140_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n),bonus(n-1);for(int&x:a)std::cin>>x;int ans=0;for(int i=0;i<n;++i){int b;std::cin>>b;ans+=b;}for(int&x:bonus)std::cin>>x;for(int i=1;i<n;++i)if(a[i]==a[i-1]+1)ans+=bonus[a[i-1]-1];std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
