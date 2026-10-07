// Placing Marbles | https://atcoder.jp/contests/abc081/tasks/abc081_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s; std::cin>>s; std::cout<<std::count(s.begin(),s.end(),'1')<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
