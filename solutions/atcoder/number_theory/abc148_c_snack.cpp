// Snack | https://atcoder.jp/contests/abc148/tasks/abc148_c
// Time: O(log(min(A,B))); extra space: O(1).
#include <iostream>
#include <numeric>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<a/std::gcd(a,b)*b<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
