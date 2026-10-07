// Three-Point Shot | https://atcoder.jp/contests/abc188/tasks/abc188_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x,y;std::cin>>x>>y;std::cout<<(std::max(x,y)-std::min(x,y)<3?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
