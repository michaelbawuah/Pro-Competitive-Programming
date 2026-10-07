// Longest Uncommon Prefix | https://atcoder.jp/contests/abc285/tasks/abc285_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    for(int shift=1;shift<n;++shift) {
        int length=0;
        while(length+shift<n&&s[length]!=s[length+shift])++length;
        std::cout<<length<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
