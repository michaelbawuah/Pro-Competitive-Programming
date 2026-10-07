// wwwvvvvvv | https://atcoder.jp/contests/abc279/tasks/abc279_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s;
    std::cin>>s;
    int answer=0;
    for(char c:s)answer+=c=='v'?1:2;
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
