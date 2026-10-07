// Palindrome with leading zeros | https://atcoder.jp/contests/abc198/tasks/abc198_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;while(s.size()>1&&s.back()=='0')s.pop_back();std::cout<<(std::equal(s.begin(),s.end(),s.rbegin())?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
