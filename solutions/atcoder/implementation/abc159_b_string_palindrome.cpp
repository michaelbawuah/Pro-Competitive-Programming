// String Palindrome | https://atcoder.jp/contests/abc159/tasks/abc159_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::string s;std::cin>>s;auto palindrome=[](const std::string&v){return std::equal(v.begin(),v.end(),v.rbegin());};std::size_t half=s.size()/2;std::cout<<(palindrome(s)&&palindrome(s.substr(0,half))&&palindrome(s.substr(half+1))?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
