// Order Something Else | https://atcoder.jp/contests/abc310/tasks/abc310_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,p,q,cheapest=100001;std::cin>>n>>p>>q;while(n--){int d;std::cin>>d;cheapest=std::min(cheapest,d);}std::cout<<std::min(p,q+cheapest)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
