// Minimize Abs 1 | https://atcoder.jp/contests/abc330/tasks/abc330_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,l,r;std::cin>>n>>l>>r;for(int i=0;i<n;++i){int a;std::cin>>a;std::cout<<std::clamp(a,l,r)<<(i+1==n?'\n':' ');}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
