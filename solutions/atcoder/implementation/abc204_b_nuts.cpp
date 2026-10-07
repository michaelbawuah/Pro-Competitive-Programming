// Nuts | https://atcoder.jp/contests/abc204/tasks/abc204_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,ans=0;
    std::cin>>n;
    while(n--) {
        int x;
        std::cin>>x;
        ans+=std::max(0,x-10);
    }
    std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
