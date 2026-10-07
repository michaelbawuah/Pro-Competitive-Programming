// Echo | https://atcoder.jp/contests/abc145/tasks/abc145_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;std::cout<<(n%2==0&&s.substr(0,n/2)==s.substr(n/2)?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
