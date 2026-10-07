// Rainy Season | https://atcoder.jp/contests/abc175/tasks/abc175_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int run=0,best=0;for(char c:s){run=c=='R'?run+1:0;best=std::max(best,run);}std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
