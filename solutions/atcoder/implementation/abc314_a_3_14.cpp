// 3.14 | https://atcoder.jp/contests/abc314/tasks/abc314_a
// Time: O(N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::string pi="3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    std::cout<<pi.substr(0,n+2)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
