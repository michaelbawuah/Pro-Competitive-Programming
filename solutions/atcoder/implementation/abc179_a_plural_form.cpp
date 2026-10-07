// Plural Form | https://atcoder.jp/contests/abc179/tasks/abc179_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::cout<<s<<(s.back()=='s'?"es":"s")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
