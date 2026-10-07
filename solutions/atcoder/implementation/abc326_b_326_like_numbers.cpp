// 326-like Numbers | https://atcoder.jp/contests/abc326/tasks/abc326_b
// Time: O(1000); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    while(n/100*(n/10%10)!=n%10)++n;
    std::cout<<n<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
