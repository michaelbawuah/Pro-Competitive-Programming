// AtCoder Beginner Contest 999 | https://atcoder.jp/contests/abc111/tasks/abc111_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    for(char&c:s)c=c=='1'?'9':'1';
    std::cout<<s<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
