// On and Off | https://atcoder.jp/contests/abc228/tasks/abc228_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long s,t,x;
    std::cin>>s>>t>>x;
    std::cout<<((x-s+24)%24<(t-s+24)%24?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
