// Rated for Me | https://atcoder.jp/contests/abc104/tasks/abc104_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long r;
    std::cin>>r;
    std::cout<<(r<1200?"ABC":r<2800?"ARC":"AGC")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
