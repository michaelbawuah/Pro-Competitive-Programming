// Second Best | https://atcoder.jp/contests/abc365/tasks/abc365_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::pair<int,int>>a(n);
    for(int i=0;i<n;++i) {
        std::cin>>a[i].first;
        a[i].second=i+1;
    }
    std::sort(a.rbegin(),a.rend());
    std::cout<<a[1].second<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
