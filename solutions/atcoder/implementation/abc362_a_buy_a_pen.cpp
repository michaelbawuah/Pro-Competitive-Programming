// Buy a Pen | https://atcoder.jp/contests/abc362/tasks/abc362_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int r,g,b;
    std::string c;
    std::cin>>r>>g>>b>>c;
    std::cout<<(c=="Red"?std::min(g,b):c=="Green"?std::min(r,b):std::min(r,g))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
