// Signed Difficulty | https://atcoder.jp/contests/abc216/tasks/abc216_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int x,y;
    char dot;
    std::cin>>x>>dot>>y;
    std::cout<<x;
    if(y<=2)std::cout<<'-';
    else if(y>=7)std::cout<<'+';
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
