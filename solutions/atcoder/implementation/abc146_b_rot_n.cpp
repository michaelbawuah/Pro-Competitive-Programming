// ROT N | https://atcoder.jp/contests/abc146/tasks/abc146_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;for(char&c:s)c=static_cast<char>('A'+(c-'A'+n)%26);std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
