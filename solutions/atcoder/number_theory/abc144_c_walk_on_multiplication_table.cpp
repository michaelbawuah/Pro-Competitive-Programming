// Walk on Multiplication Table | https://atcoder.jp/contests/abc144/tasks/abc144_c
// Time: O(sqrt(N)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    long long ans=n-1;
    for(long long d=1;d<=n/d;++d)if(n%d==0)ans=std::min(ans,d+n/d-2);
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
