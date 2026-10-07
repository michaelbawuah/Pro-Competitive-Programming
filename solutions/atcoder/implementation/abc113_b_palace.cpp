// Palace | https://atcoder.jp/contests/abc113/tasks/abc113_b
// Time: O(n); extra space: O(1).
#include <cstdlib>
#include <iostream>



void solve() {
    int n,t,a;std::cin>>n>>t>>a;long long best=1000000000;int answer=0;for(int i=1;i<=n;++i){long long h;std::cin>>h;long long delta=std::abs(1000LL*(t-a)-6*h);if(delta<best){best=delta;answer=i;}}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
