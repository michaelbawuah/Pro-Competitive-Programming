// One Clue | https://atcoder.jp/contests/abc137/tasks/abc137_b
// Time: O(K); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int k,x;
    std::cin>>k>>x;
    for(int p=x-k+1;p<=x+k-1;++p)std::cout<<p<<' ';
    std::cout<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
