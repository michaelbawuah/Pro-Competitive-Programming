// Horizon | https://atcoder.jp/contests/abc239/tasks/abc239_a
// Time: O(1); extra space: O(1).
#include <cmath>
#include <iomanip>
#include <iostream>

void solve() {
    double h;
    std::cin>>h;
    std::cout<<std::setprecision(15)<<std::sqrt(h*(12800000+h))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
