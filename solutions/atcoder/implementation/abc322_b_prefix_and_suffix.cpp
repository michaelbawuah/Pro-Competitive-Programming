// Prefix and Suffix | https://atcoder.jp/contests/abc322/tasks/abc322_b
// Time: O(N+M); extra space: O(N+M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::string s,t;std::cin>>n>>m>>s>>t;bool prefix=t.substr(0,n)==s,suffix=t.substr(m-n)==s;std::cout<<(prefix?(suffix?0:1):(suffix?2:3))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
