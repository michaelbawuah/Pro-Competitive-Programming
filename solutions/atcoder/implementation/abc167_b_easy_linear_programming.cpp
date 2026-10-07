// Easy Linear Programming | https://atcoder.jp/contests/abc167/tasks/abc167_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,c,k;std::cin>>a>>b>>c>>k;std::cout<<(std::min(a,k)-std::max(0LL,k-a-b))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
