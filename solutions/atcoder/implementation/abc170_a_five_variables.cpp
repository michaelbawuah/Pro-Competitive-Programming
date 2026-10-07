// Five Variables | https://atcoder.jp/contests/abc170/tasks/abc170_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    for(int i=1;i<=5;++i) {
        int x;
        std::cin>>x;
        if(x==0)std::cout<<i<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
