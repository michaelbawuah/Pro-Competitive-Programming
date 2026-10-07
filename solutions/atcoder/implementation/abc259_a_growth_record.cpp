// Growth Record | https://atcoder.jp/contests/abc259/tasks/abc259_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,m,x,t,d;std::cin>>n>>m>>x>>t>>d;std::cout<<(t-std::max(0LL,x-m)*d)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
