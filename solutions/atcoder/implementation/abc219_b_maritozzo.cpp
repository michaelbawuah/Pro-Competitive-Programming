// Maritozzo | https://atcoder.jp/contests/abc219/tasks/abc219_b
// Time: O(output length); extra space: O(input length).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<std::string>s(3);for(auto&x:s)std::cin>>x;std::string order;std::cin>>order;for(char c:order)std::cout<<s[c-'1'];std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
