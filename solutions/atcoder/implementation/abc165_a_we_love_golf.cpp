// We Love Golf | https://atcoder.jp/contests/abc165/tasks/abc165_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long k,a,b;std::cin>>k>>a>>b;std::cout<<((a+k-1)/k*k<=b?"OK":"NG")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
