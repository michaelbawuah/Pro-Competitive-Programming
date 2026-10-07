// Count Balls | https://atcoder.jp/contests/abc158/tasks/abc158_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,a,b;std::cin>>n>>a>>b;std::cout<<(n/(a+b)*a+std::min(n%(a+b),a))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
