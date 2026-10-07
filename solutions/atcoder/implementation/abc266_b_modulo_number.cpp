// Modulo Number | https://atcoder.jp/contests/abc266/tasks/abc266_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n;std::cin>>n;std::cout<<((n%998244353+998244353)%998244353)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
