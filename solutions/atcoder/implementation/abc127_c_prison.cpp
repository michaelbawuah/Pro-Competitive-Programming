// Prison | https://atcoder.jp/contests/abc127/tasks/abc127_c
// Time: O(M); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    int lo=1,hi=n;
    while(m--) {
        int l,r;
        std::cin>>l>>r;
        lo=std::max(lo,l);
        hi=std::min(hi,r);
    }
    std::cout<<std::max(0,hi-lo+1)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
