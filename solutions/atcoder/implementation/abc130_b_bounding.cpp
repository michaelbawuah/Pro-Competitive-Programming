// Bounding | https://atcoder.jp/contests/abc130/tasks/abc130_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x,pos=0,ans=1;std::cin>>n>>x;while(n--){int d;std::cin>>d;pos+=d;ans+=pos<=x;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
