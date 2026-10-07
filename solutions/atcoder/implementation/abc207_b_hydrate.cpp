// Hydrate | https://atcoder.jp/contests/abc207/tasks/abc207_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,d;
    std::cin>>a>>b>>c>>d;
    long long gain=c*d-b;
    std::cout<<(gain<=0?-1:(a+gain-1)/gain)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
