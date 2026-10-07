// chukodai | https://atcoder.jp/contests/abc236/tasks/abc236_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    int a,b;
    std::cin>>s>>a>>b;
    std::swap(s[a-1],s[b-1]);
    std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
