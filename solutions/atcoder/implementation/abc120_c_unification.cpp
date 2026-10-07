// Unification | https://atcoder.jp/contests/abc120/tasks/abc120_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int zeros=std::count(s.begin(),s.end(),'0'),ones=static_cast<int>(s.size())-zeros;std::cout<<2*std::min(zeros,ones)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
