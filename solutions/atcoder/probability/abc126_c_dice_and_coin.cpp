// Dice and Coin | https://atcoder.jp/contests/abc126/tasks/abc126_c
// Time: O(n log K); extra space: O(1).
#include <iomanip>
#include <iostream>

void solve() {
    int n,k;
    std::cin>>n>>k;
    double answer=0;
    for(int i=1;i<=n;++i) {
        double chance=1.0/n;
        for(int score=i;score<k;score*=2)chance*=0.5;
        answer+=chance;
    }
    std::cout<<std::setprecision(15)<<answer<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
