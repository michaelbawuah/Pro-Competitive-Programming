// Fennec vs Monster | https://atcoder.jp/contests/abc153/tasks/abc153_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;std::vector<long long>h(n);for(auto&x:h)std::cin>>x;std::sort(h.begin(),h.end());long long ans=0;for(int i=0;i<n-k;++i)ans+=h[i];std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
