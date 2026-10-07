// ABC Preparation | https://atcoder.jp/contests/abc185/tasks/abc185_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<(std::min({a,b,c,d}))<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
