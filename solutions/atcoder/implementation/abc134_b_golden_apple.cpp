// Golden Apple | https://atcoder.jp/contests/abc134/tasks/abc134_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,d;
    std::cin>>n>>d;
    std::cout<<((n+2*d)/(2*d+1))<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
