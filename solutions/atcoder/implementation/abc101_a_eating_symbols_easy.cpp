// Eating Symbols Easy | https://atcoder.jp/contests/abc101/tasks/abc101_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int total=0;
    for(char c:s)total+=c=='+'?1:-1;
    std::cout<<total<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
