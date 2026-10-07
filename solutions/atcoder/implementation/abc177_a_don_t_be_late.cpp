// Don't be late | https://atcoder.jp/contests/abc177/tasks/abc177_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long d,t,s;
    std::cin>>d>>t>>s;
    std::cout<<(t*s>=d?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
