// I Scream | https://atcoder.jp/contests/abc194/tasks/abc194_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    std::cout<<(a+b>=15&&b>=8?1:a+b>=10&&b>=3?2:a+b>=3?3:4)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
