// Distance | https://atcoder.jp/contests/abc174/tasks/abc174_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    long long d;
    std::cin>>n>>d;
    int ans=0;
    while(n--) {
        long long x,y;
        std::cin>>x>>y;
        ans+=x*x+y*y<=d*d;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
