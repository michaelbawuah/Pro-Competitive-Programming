// Ringo's Favorite Numbers | https://atcoder.jp/contests/abc100/tasks/abc100_b
// Time: O(D); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int d,n;std::cin>>d>>n;int scale=1;while(d--)scale*=100;std::cout<<scale*(n==100?101:n)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
