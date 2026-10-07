// 10yen Stamp | https://atcoder.jp/contests/abc233/tasks/abc233_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x,y;
    std::cin>>x>>y;
    std::cout<<(std::max(0LL,(y-x+9)/10))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
