// Crane and Turtle | https://atcoder.jp/contests/abc170/tasks/abc170_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x,y;
    std::cin>>x>>y;
    std::cout<<(y%2==0&&2*x<=y&&y<=4*x?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
