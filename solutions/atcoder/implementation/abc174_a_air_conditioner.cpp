// Air Conditioner | https://atcoder.jp/contests/abc174/tasks/abc174_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x;
    std::cin>>x;
    std::cout<<(x>=30?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
