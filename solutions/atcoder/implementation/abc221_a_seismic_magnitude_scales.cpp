// Seismic magnitude scales | https://atcoder.jp/contests/abc221/tasks/abc221_a
// Time: O(A-B); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int a,b;
    std::cin>>a>>b;
    long long ans=1;
    for(int i=0;i<a-b;++i)ans*=32;
    std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
