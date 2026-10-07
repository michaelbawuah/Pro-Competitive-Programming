// Lacked Number | https://atcoder.jp/contests/abc248/tasks/abc248_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int missing=45;
    for(char c:s)missing-=c-'0';
    std::cout<<missing<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
