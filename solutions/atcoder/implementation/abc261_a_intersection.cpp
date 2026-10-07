// Intersection | https://atcoder.jp/contests/abc261/tasks/abc261_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long l1,r1,l2,r2;
    std::cin>>l1>>r1>>l2>>r2;
    std::cout<<(std::max(0LL,std::min(r1,r2)-std::max(l1,l2)))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
