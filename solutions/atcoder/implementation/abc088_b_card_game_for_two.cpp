// Card Game for Two | https://atcoder.jp/contests/abc088/tasks/abc088_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    std::sort(a.rbegin(),a.rend());
    int ans=0;
    for(int i=0;i<n;++i)ans+=(i%2?-a[i]:a[i]);
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
