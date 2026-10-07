// Round decimals | https://atcoder.jp/contests/abc226/tasks/abc226_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    auto dot=s.find('.');
    int answer=std::stoi(s.substr(0,dot))+(s[dot+1]>='5');
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
