// TAKOYAKI FESTIVAL 2019 | https://atcoder.jp/contests/abc143/tasks/abc143_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;long long prefix=0,ans=0;while(n--){long long x;std::cin>>x;ans+=prefix*x;prefix+=x;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
