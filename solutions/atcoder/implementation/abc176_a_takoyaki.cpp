// Takoyaki | https://atcoder.jp/contests/abc176/tasks/abc176_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,x,t;std::cin>>n>>x>>t;std::cout<<(((n+x-1)/x)*t)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
