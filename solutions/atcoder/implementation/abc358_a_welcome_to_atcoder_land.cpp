// Welcome to AtCoder Land | https://atcoder.jp/contests/abc358/tasks/abc358_a
// Time: O(|S|+|T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t;
    std::cin>>s>>t;
    std::cout<<(s=="AtCoder"&&t=="Land"?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
