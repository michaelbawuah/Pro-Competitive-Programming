// Five Transportations | https://atcoder.jp/contests/abc123/tasks/abc123_c
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,capacity=1000000000000000LL;std::cin>>n;for(int i=0;i<5;++i){long long x;std::cin>>x;capacity=std::min(capacity,x);}std::cout<<(n+capacity-1)/capacity+4<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
