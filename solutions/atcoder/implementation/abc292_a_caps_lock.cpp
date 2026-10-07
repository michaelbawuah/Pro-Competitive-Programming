// CAPS LOCK | https://atcoder.jp/contests/abc292/tasks/abc292_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    for(char&c:s)c=static_cast<char>('A'+c-'a');
    std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
