// Calc | https://atcoder.jp/contests/abc172/tasks/abc172_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a;
    std::cin>>a;
    std::cout<<(a+a*a+a*a*a)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
