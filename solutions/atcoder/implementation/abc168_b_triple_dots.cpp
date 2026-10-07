// ... (Triple Dots) | https://atcoder.jp/contests/abc168/tasks/abc168_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int k;std::string s;std::cin>>k>>s;std::cout<<(static_cast<int>(s.size())<=k?s:s.substr(0,k)+"...")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
