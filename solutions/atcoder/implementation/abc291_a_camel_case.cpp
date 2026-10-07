// camel Case | https://atcoder.jp/contests/abc291/tasks/abc291_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    for(std::size_t i=0;i<s.size();++i)if('A'<=s[i]&&s[i]<='Z')std::cout<<i+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
