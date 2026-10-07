// Sequence of Strings | https://atcoder.jp/contests/abc284/tasks/abc284_a
// Time: O(total characters); extra space: O(total characters).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>s(n);for(auto&x:s)std::cin>>x;for(int i=n-1;i>=0;--i)std::cout<<s[i]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
