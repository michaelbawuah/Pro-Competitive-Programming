// Battle | https://atcoder.jp/contests/abc164/tasks/abc164_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<((c+b-1)/b<=(a+d-1)/d?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
