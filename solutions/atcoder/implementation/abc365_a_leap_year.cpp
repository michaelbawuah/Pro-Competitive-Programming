// Leap Year | https://atcoder.jp/contests/abc365/tasks/abc365_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long y;
    std::cin>>y;
    std::cout<<(365+(y%400==0||(y%4==0&&y%100!=0)))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
