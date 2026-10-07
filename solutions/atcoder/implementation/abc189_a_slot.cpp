// Slot | https://atcoder.jp/contests/abc189/tasks/abc189_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::cout<<(s[0]==s[1]&&s[1]==s[2]?"Won":"Lost")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
