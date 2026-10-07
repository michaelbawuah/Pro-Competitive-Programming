// Cabbages | https://atcoder.jp/contests/abc210/tasks/abc210_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,a,x,y;
    std::cin>>n>>a>>x>>y;
    std::cout<<(std::min(n,a)*x+std::max(0LL,n-a)*y)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
