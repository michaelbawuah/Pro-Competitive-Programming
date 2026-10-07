// Multiple of 2 and N | https://atcoder.jp/contests/abc102/tasks/abc102_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    std::cout<<(n%2?2*n:n)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
