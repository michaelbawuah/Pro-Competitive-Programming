// Uneven Numbers | https://atcoder.jp/contests/abc136/tasks/abc136_b
// Time: O(N log N); extra space: O(log N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,ans=0;std::cin>>n;for(int x=1;x<=n;++x)ans+=std::to_string(x).size()%2;std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
