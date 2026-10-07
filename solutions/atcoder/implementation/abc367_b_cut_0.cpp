// Cut .0 | https://atcoder.jp/contests/abc367/tasks/abc367_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;while(s.back()=='0')s.pop_back();if(s.back()=='.')s.pop_back();std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
