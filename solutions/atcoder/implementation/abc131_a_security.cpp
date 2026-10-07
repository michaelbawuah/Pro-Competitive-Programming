// Security | https://atcoder.jp/contests/abc131/tasks/abc131_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;bool good=true;for(int i=1;i<4;++i)good=good&&s[i]!=s[i-1];std::cout<<(good?"Good":"Bad")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
