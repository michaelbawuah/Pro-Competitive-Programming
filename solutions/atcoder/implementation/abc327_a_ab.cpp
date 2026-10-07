// ab | https://atcoder.jp/contests/abc327/tasks/abc327_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    std::cout<<(s.find("ab")!=std::string::npos||s.find("ba")!=std::string::npos?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
