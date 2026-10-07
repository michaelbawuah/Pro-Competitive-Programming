// Can't Wait for Holiday | https://atcoder.jp/contests/abc146/tasks/abc146_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    std::vector<std::string>days{"SUN","MON","TUE","WED","THU","FRI","SAT"};
    for(int i=0;i<7;++i)if(s==days[i])std::cout<<7-i<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
