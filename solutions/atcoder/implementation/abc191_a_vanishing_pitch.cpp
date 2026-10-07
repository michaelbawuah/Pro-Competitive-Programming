// Vanishing Pitch | https://atcoder.jp/contests/abc191/tasks/abc191_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long v,t,s,d;
    std::cin>>v>>t>>s>>d;
    std::cout<<(d<v*t||d>v*s?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
