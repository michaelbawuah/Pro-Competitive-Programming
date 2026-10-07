// Digital Gifts | https://atcoder.jp/contests/abc119/tasks/abc119_b
// Time: O(n); extra space: O(1).
#include <iomanip>
#include <iostream>
#include <string>

void solve() {
    int n;
    std::cin>>n;
    double total=0;
    while(n--) {
        double x;
        std::string unit;
        std::cin>>x>>unit;
        total+=x*(unit=="BTC"?380000.0:1.0);
    }
    std::cout<<std::setprecision(15)<<total<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
