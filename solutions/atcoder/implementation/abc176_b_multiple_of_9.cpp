// Multiple of 9 | https://atcoder.jp/contests/abc176/tasks/abc176_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int sum=0;
    for(char c:s)sum+=c-'0';
    std::cout<<(sum%9==0?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
