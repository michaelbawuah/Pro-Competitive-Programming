// Tetrahedral Number | https://atcoder.jp/contests/abc335/tasks/abc335_b
// Time: O((N+1)^3); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    for(int x=0;x<=n;++x)for(int y=0;x+y<=n;++y)for(int z=0;x+y+z<=n;++z)std::cout<<x<<' '<<y<<' '<<z<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
