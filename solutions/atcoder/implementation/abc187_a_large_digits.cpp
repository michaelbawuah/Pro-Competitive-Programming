// Large Digits | https://atcoder.jp/contests/abc187/tasks/abc187_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string a,b;
    std::cin>>a>>b;
    int x=0,y=0;
    for(char c:a)x+=c-'0';
    for(char c:b)y+=c-'0';
    std::cout<<std::max(x,y)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
