// First ABC 2 | https://atcoder.jp/contests/abc322/tasks/abc322_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    auto position=s.find("ABC");
    std::cout<<(position==std::string::npos?-1:static_cast<int>(position)+1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
