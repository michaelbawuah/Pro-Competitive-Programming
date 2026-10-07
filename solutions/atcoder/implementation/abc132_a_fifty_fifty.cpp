// Fifty-Fifty | https://atcoder.jp/contests/abc132/tasks/abc132_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::sort(s.begin(),s.end());std::cout<<(s[0]==s[1]&&s[2]==s[3]&&s[1]!=s[2]?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
