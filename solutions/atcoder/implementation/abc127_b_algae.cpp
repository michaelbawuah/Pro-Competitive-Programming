// Algae | https://atcoder.jp/contests/abc127/tasks/abc127_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long r,d,x;
    std::cin>>r>>d>>x;
    for(int i=0;i<10;++i) {
        x=r*x-d;
        std::cout<<x<<'\n';
    }
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
