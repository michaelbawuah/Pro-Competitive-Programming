// Roller Coaster | https://atcoder.jp/contests/abc142/tasks/abc142_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k,ans=0;std::cin>>n>>k;while(n--){int h;std::cin>>h;ans+=h>=k;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
