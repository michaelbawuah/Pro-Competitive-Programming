// Rotate | https://atcoder.jp/contests/abc235/tasks/abc235_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;int sum=0;for(char c:s)sum+=c-'0';std::cout<<111*sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
