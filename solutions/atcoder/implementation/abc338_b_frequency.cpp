// Frequency | https://atcoder.jp/contests/abc338/tasks/abc338_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<int>count(26);
    for(char c:s)++count[c-'a'];
    int best=0;
    for(int i=1;i<26;++i)if(count[i]>count[best])best=i;
    std::cout<<static_cast<char>('a'+best)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
