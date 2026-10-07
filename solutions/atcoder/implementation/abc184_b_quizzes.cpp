// Quizzes | https://atcoder.jp/contests/abc184/tasks/abc184_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,x;
    std::string s;
    std::cin>>n>>x>>s;
    for(char c:s)if(c=='o')++x;
    else x=std::max(0,x-1);
    std::cout<<x<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
