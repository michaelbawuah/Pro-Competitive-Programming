// LOOKUP | https://atcoder.jp/contests/abc279/tasks/abc279_b
// Time: O(|S||T|); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s,t;std::cin>>s>>t;std::cout<<(s.find(t)!=std::string::npos?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
