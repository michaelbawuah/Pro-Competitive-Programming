// Overall Winner | https://atcoder.jp/contests/abc301/tasks/abc301_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    int t=std::count(s.begin(),s.end(),'T');
    char winner=2*t>n?'T':2*t<n?'A':s.back()=='T'?'A':'T';
    std::cout<<winner<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
