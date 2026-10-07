// 180° | https://atcoder.jp/contests/abc202/tasks/abc202_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;std::reverse(s.begin(),s.end());for(char&c:s)if(c=='6')c='9';else if(c=='9')c='6';std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
