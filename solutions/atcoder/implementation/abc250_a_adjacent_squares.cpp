// Adjacent Squares | https://atcoder.jp/contests/abc250/tasks/abc250_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long h,w,r,c;
    std::cin>>h>>w>>r>>c;
    std::cout<<((r>1)+(r<h)+(c>1)+(c<w))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
