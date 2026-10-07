// Biscuit Generator | https://atcoder.jp/contests/abc125/tasks/abc125_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,t;
    std::cin>>a>>b>>t;
    std::cout<<((t/a)*b)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
