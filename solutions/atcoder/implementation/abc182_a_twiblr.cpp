// twiblr | https://atcoder.jp/contests/abc182/tasks/abc182_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    std::cout<<(2*a+100-b)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
