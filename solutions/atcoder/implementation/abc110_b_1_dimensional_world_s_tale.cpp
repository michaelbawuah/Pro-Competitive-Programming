// 1 Dimensional World's Tale | https://atcoder.jp/contests/abc110/tasks/abc110_b
// Time: O(n+m); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m,lo,hi;
    std::cin>>n>>m>>lo>>hi;
    while(n--) {
        int x;
        std::cin>>x;
        lo=std::max(lo,x);
    }
    while(m--) {
        int x;
        std::cin>>x;
        hi=std::min(hi,x);
    }
    std::cout<<(lo<hi?"No War":"War")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
