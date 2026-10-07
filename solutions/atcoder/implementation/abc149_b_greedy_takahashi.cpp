// Greedy Takahashi | https://atcoder.jp/contests/abc149/tasks/abc149_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,k;std::cin>>a>>b>>k;long long take=std::min(a,k);a-=take;k-=take;b-=std::min(b,k);std::cout<<a<<' '<<b<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
