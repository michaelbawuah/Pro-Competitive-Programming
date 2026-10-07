// Achieve the Goal | https://atcoder.jp/contests/abc151/tasks/abc151_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k,m,sum=0;
    std::cin>>n>>k>>m;
    for(int i=1;i<n;++i) {
        int x;
        std::cin>>x;
        sum+=x;
    }
    int need=std::max(0,n*m-sum);
    std::cout<<(need<=k?need:-1)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
