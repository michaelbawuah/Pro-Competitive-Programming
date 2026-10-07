// Remaining Balls | https://atcoder.jp/contests/abc154/tasks/abc154_a
// Time: O(|S|+|T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t,u;
    int a,b;
    std::cin>>s>>t>>a>>b>>u;
    if(u==s)--a;
    else --b;
    std::cout<<a<<' '<<b<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
