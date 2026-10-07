// 753 | https://atcoder.jp/contests/abc114/tasks/abc114_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x;
    std::cin>>x;
    std::cout<<(x==3||x==5||x==7?"YES":"NO")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
