// Job Interview | https://atcoder.jp/contests/abc298/tasks/abc298_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;std::cout<<(s.find('o')!=std::string::npos&&s.find('x')==std::string::npos?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
