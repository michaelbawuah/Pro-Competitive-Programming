// Time Limit Exceeded | https://atcoder.jp/contests/abc112/tasks/abc112_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,t,ans=1001;
    std::cin>>n>>t;
    while(n--) {
        int c,dt;
        std::cin>>c>>dt;
        if(dt<=t)ans=std::min(ans,c);
    }
    if(ans==1001)std::cout<<"TLE\n";
    else std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
