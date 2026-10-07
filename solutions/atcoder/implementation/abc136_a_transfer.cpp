// Transfer | https://atcoder.jp/contests/abc136/tasks/abc136_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c;
    std::cin>>a>>b>>c;
    std::cout<<(std::max(0LL,c-(a-b)))<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
