// Yay! | https://atcoder.jp/contests/abc342/tasks/abc342_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<int>frequency(26);
    for(char c:s)++frequency[c-'a'];
    for(std::size_t i=0;i<s.size();++i)if(frequency[s[i]-'a']==1)std::cout<<i+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
