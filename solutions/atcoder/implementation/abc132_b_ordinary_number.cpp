// Ordinary Number | https://atcoder.jp/contests/abc132/tasks/abc132_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;int ans=0;for(int i=1;i+1<n;++i)ans+=(a[i-1]<a[i]&&a[i]<a[i+1])||(a[i-1]>a[i]&&a[i]>a[i+1]);std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
