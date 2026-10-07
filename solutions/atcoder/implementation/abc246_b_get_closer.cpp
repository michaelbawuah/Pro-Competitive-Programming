// Get Closer | https://atcoder.jp/contests/abc246/tasks/abc246_b
// Time: O(1); extra space: O(1).
#include <cmath>
#include <iomanip>
#include <iostream>



void solve() {
    double a,b;std::cin>>a>>b;double length=std::hypot(a,b);std::cout<<std::setprecision(15)<<a/length<<' '<<b/length<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
