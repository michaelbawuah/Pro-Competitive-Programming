// αlphabet | https://atcoder.jp/contests/abc171/tasks/abc171_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    char c;
    std::cin>>c;
    std::cout<<(c>='A'&&c<='Z'?'A':'a')<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
