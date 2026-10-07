// management | https://atcoder.jp/contests/abc163/tasks/abc163_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>count(n);
    for(int i=1;i<n;++i) {
        int boss;
        std::cin>>boss;
        ++count[boss-1];
    }
    for(int x:count)std::cout<<x<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
