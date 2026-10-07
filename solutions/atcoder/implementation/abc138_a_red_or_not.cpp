// Red or Not | https://atcoder.jp/contests/abc138/tasks/abc138_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a;std::string s;std::cin>>a>>s;std::cout<<(a>=3200?s:"red")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
