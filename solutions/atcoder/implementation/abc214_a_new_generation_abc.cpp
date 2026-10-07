// New Generation ABC | https://atcoder.jp/contests/abc214/tasks/abc214_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    std::cout<<(n<=125?4:n<=211?6:8)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
