// Resistors in Parallel | https://atcoder.jp/contests/abc138/tasks/abc138_b
// Time: O(n); extra space: O(1).
#include <iomanip>
#include <iostream>

void solve() {
    int n;
    std::cin>>n;
    double sum=0;
    while(n--) {
        double x;
        std::cin>>x;
        sum+=1.0/x;
    }
    std::cout<<std::setprecision(15)<<1.0/sum<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
