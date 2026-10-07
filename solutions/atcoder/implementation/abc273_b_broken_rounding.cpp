// Broken Rounding | https://atcoder.jp/contests/abc273/tasks/abc273_b
// Time: O(K); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x;int k;std::cin>>x>>k;long long place=10;for(int i=0;i<k;++i){x=(x+place/2)/place*place;place*=10;}std::cout<<x<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
