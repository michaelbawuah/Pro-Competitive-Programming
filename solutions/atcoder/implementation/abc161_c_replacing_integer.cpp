// Replacing Integer | https://atcoder.jp/contests/abc161/tasks/abc161_c
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,k;std::cin>>n>>k;n%=k;std::cout<<std::min(n,k-n)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
