// Blood Pressure | https://atcoder.jp/contests/abc211/tasks/abc211_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>

void solve() {
    double a,b;
    std::cin>>a>>b;
    std::cout<<std::setprecision(15)<<(a-b)/3+b<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
