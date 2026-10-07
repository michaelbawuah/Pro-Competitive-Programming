// World Cup | https://atcoder.jp/contests/abc262/tasks/abc262_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long y;std::cin>>y;std::cout<<(y+(2-y%4+4)%4)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
