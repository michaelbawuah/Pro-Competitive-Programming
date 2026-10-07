// tcdr | https://atcoder.jp/contests/abc315/tasks/abc315_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,vowels="aeiou";
    std::cin>>s;
    for(char c:s)if(vowels.find(c)==std::string::npos)std::cout<<c;
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
