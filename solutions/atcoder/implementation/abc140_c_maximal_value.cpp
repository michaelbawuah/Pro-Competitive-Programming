// Maximal Value | https://atcoder.jp/contests/abc140/tasks/abc140_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>b(n-1);for(int&x:b)std::cin>>x;long long ans=b.front()+b.back();for(int i=1;i<n-1;++i)ans+=std::min(b[i-1],b[i]);std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
