// Changing a Character | https://atcoder.jp/contests/abc126/tasks/abc126_a
// Time: O(n); extra space: O(n).
#include <cctype>
#include <iostream>
#include <string>



void solve() {
    int n,k;std::string s;std::cin>>n>>k>>s;s[k-1]=static_cast<char>(std::tolower(static_cast<unsigned char>(s[k-1])));std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
