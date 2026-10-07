// Power Socket | https://atcoder.jp/contests/abc139/tasks/abc139_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    std::cout<<((b-1+a-2)/(a-1))<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
