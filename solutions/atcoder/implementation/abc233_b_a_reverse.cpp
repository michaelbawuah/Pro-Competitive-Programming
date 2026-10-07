// A Reverse | https://atcoder.jp/contests/abc233/tasks/abc233_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int l,r;
    std::string s;
    std::cin>>l>>r>>s;
    std::reverse(s.begin()+l-1,s.begin()+r);
    std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
