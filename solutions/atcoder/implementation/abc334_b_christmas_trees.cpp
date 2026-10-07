// Christmas Trees | https://atcoder.jp/contests/abc334/tasks/abc334_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,m,l,r;
    std::cin>>a>>m>>l>>r;
    auto floor_div=[&](long long x) {
        return x/m-(x<0&&x%m!=0);
    };
    std::cout<<floor_div(r-a)-floor_div(l-a-1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
