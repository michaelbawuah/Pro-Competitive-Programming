// String Shifting | https://atcoder.jp/contests/abc223/tasks/abc223_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::string low=s,high=s;
    for(std::size_t i=1;i<s.size();++i) {
        std::string t=s.substr(i)+s.substr(0,i);
        low=std::min(low,t);
        high=std::max(high,t);
    }
    std::cout<<low<<'\n'<<high<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
