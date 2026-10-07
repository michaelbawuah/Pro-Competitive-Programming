// Penalty Kick | https://atcoder.jp/contests/abc348/tasks/abc348_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    for(int i=1;i<=n;++i)std::cout<<(i%3==0?'x':'o');
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
