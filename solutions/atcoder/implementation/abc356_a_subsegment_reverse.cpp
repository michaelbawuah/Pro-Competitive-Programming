// Subsegment Reverse | https://atcoder.jp/contests/abc356/tasks/abc356_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,l,r;std::cin>>n>>l>>r;for(int i=1;i<=n;++i)std::cout<<(l<=i&&i<=r?l+r-i:i)<<(i==n?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
