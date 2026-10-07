// Grand Garden | https://atcoder.jp/contests/abc116/tasks/abc116_c
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,prev=0,ans=0;
    std::cin>>n;
    while(n--) {
        int h;
        std::cin>>h;
        ans+=std::max(0,h-prev);
        prev=h;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
