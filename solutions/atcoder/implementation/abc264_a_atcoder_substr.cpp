// "atcoder".substr() | https://atcoder.jp/contests/abc264/tasks/abc264_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int l,r;
    std::cin>>l>>r;
    std::string s="atcoder";
    std::cout<<s.substr(l-1,r-l+1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
