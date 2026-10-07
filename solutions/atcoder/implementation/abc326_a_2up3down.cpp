// 2UP3DOWN | https://atcoder.jp/contests/abc326/tasks/abc326_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x,y;
    std::cin>>x>>y;
    std::cout<<(-3<=y-x&&y-x<=2?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
