// Raise Both Hands | https://atcoder.jp/contests/abc370/tasks/abc370_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int l,r;
    std::cin>>l>>r;
    std::cout<<(l==r?"Invalid":l==1?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
