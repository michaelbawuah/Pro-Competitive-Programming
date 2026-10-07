// Half and Half | https://atcoder.jp/contests/abc095/tasks/arc096_a
// Time: O(max(X,Y)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,x,y;
    std::cin>>a>>b>>c>>x>>y;
    long long ans=a*x+b*y;
    for(long long pairs=0;pairs<=std::max(x,y);++pairs)ans=std::min(ans,2*c*pairs+a*std::max(0LL,x-pairs)+b*std::max(0LL,y-pairs));
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
