// Station and Bus | https://atcoder.jp/contests/abc158/tasks/abc158_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::cout<<(s[0]==s[1]&&s[1]==s[2]?"No":"Yes")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
