// Apple | https://atcoder.jp/contests/abc265/tasks/abc265_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x,y,n;std::cin>>x>>y>>n;std::cout<<(n/3*std::min(3*x,y)+n%3*x)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
