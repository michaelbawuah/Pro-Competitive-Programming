// K-th Common Divisor | https://atcoder.jp/contests/abc120/tasks/abc120_b
// Time: O(min(A,B)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b,k;std::cin>>a>>b>>k;for(int d=std::min(a,b);d>=1;--d)if(a%d==0&&b%d==0&&--k==0){std::cout<<d<<'\n';return;}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
