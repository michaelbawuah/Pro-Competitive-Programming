// Odds of Oddness | https://atcoder.jp/contests/abc142/tasks/abc142_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>



void solve() {
    int n;std::cin>>n;std::cout<<std::setprecision(15)<<((n+1)/2)/static_cast<double>(n)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
