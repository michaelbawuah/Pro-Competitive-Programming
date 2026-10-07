// Anti-Division | https://atcoder.jp/contests/abc131/tasks/abc131_c
// Time: O(log(min(C,D))); extra space: O(1).
#include <iostream>
#include <numeric>

void solve() {
    long long a,b,c,d;
    std::cin>>a>>b>>c>>d;
    long long lcm=c/std::gcd(c,d)*d;
    auto good=[&](long long x) {
        return x-x/c-x/d+x/lcm;
    }
    ;
    std::cout<<good(b)-good(a-1)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
