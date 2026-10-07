// Go to School | https://atcoder.jp/contests/abc142/tasks/abc142_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>order(n);
    for(int i=1;i<=n;++i) {
        int rank;
        std::cin>>rank;
        order[rank-1]=i;
    }
    for(int who:order)std::cout<<who<<' ';
    std::cout<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
