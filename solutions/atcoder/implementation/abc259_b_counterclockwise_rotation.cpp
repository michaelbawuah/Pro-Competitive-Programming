// Counterclockwise Rotation | https://atcoder.jp/contests/abc259/tasks/abc259_b
// Time: O(1); extra space: O(1).
#include <cmath>
#include <iomanip>
#include <iostream>



void solve() {
    double a,b,d;std::cin>>a>>b>>d;double angle=d*std::acos(-1.0)/180;std::cout<<std::setprecision(15)<<a*std::cos(angle)-b*std::sin(angle)<<' '<<a*std::sin(angle)+b*std::cos(angle)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
