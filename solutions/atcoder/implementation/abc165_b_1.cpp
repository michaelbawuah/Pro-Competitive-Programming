// 1% | https://atcoder.jp/contests/abc165/tasks/abc165_b
// Time: O(log X); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long x,balance=100;std::cin>>x;int years=0;while(balance<x){balance+=balance/100;++years;}std::cout<<years<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
