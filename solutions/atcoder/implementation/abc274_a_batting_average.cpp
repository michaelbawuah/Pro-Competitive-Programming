// Batting Average | https://atcoder.jp/contests/abc274/tasks/abc274_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>



void solve() {
    int a,b;std::cin>>a>>b;int thousandths=(2000*b+a)/(2*a);std::cout<<thousandths/1000<<'.'<<std::setfill('0')<<std::setw(3)<<thousandths%1000<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
