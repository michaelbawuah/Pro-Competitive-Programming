// Lucky 7 | https://atcoder.jp/contests/abc162/tasks/abc162_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::cout<<(s.find('7')!=std::string::npos?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
