// Double Helix | https://atcoder.jp/contests/abc122/tasks/abc122_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    char c;
    std::cin>>c;
    std::cout<<(c=='A'?'T':c=='T'?'A':c=='C'?'G':'C')<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
