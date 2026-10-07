// Weather Forecast | https://atcoder.jp/contests/abc218/tasks/abc218_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;std::cout<<(s[n-1]=='o'?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
