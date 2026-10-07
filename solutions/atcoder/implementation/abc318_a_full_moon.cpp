// Full Moon | https://atcoder.jp/contests/abc318/tasks/abc318_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,m,p;std::cin>>n>>m>>p;std::cout<<(n<m?0:(n-m)/p+1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
