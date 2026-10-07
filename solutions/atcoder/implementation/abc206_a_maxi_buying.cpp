// Maxi-Buying | https://atcoder.jp/contests/abc206/tasks/abc206_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    int cost=108*n/100;
    std::cout<<(cost<206?"Yay!":cost==206?"so-so":":(")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
