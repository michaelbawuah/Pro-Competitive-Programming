// AtCoder Condominium | https://atcoder.jp/contests/abc203/tasks/abc203_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,k;
    std::cin>>n>>k;
    std::cout<<(100*k*n*(n+1)/2+n*k*(k+1)/2)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
