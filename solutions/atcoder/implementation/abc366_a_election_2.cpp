// Election 2 | https://atcoder.jp/contests/abc366/tasks/abc366_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n,t,a;
    std::cin>>n>>t>>a;
    std::cout<<(2*std::max(t,a)>n?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
