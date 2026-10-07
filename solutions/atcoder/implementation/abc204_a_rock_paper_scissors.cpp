// Rock-paper-scissors | https://atcoder.jp/contests/abc204/tasks/abc204_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x,y;std::cin>>x>>y;std::cout<<(x==y?x:3-x-y)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
