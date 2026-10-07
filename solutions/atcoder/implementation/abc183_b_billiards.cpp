// Billiards | https://atcoder.jp/contests/abc183/tasks/abc183_b
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>

void solve() {
    long double sx,sy,gx,gy;
    std::cin>>sx>>sy>>gx>>gy;
    std::cout<<std::setprecision(18)<<(sx*gy+gx*sy)/(sy+gy)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
