// Median? | https://atcoder.jp/contests/abc253/tasks/abc253_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<(std::min(a,c)<=b&&b<=std::max(a,c)?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
