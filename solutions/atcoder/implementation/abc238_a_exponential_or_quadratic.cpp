// Exponential or Quadratic | https://atcoder.jp/contests/abc238/tasks/abc238_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    std::cout<<(n==1||n>=5?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
