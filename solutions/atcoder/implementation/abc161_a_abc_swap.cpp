// ABC Swap | https://atcoder.jp/contests/abc161/tasks/abc161_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int x,y,z;std::cin>>x>>y>>z;std::swap(x,y);std::swap(x,z);std::cout<<x<<' '<<y<<' '<<z<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
