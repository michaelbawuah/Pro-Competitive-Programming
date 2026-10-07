// Integer Division | https://atcoder.jp/contests/abc239/tasks/abc239_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long x;
    std::cin>>x;
    std::cout<<(x/10-(x<0&&x%10!=0))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
