// Savings | https://atcoder.jp/contests/abc206/tasks/abc206_b
// Time: O(sqrt(N)); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,sum=0,day=0;std::cin>>n;while(sum<n)sum+=++day;std::cout<<day<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
