// Five Antennas | https://atcoder.jp/contests/abc123/tasks/abc123_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,d,e,k;
    std::cin>>a>>b>>c>>d>>e>>k;
    std::cout<<(e-a<=k?"Yay!":":(")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
