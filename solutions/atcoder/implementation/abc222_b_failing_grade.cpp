// Failing Grade | https://atcoder.jp/contests/abc222/tasks/abc222_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,p,ans=0;
    std::cin>>n>>p;
    while(n--) {
        int x;
        std::cin>>x;
        ans+=x<p;
    }
    std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
