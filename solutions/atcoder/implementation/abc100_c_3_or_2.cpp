// *3 or /2 | https://atcoder.jp/contests/abc100/tasks/abc100_c
// Time: O(n log A); extra space: O(1).
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
        while(x%2==0) {
            ++ans;
            x/=2;
        }
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
