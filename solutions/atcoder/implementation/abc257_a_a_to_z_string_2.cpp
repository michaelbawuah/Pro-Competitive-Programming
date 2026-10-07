// A to Z String 2 | https://atcoder.jp/contests/abc257/tasks/abc257_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,x;
    std::cin>>n>>x;
    std::cout<<static_cast<char>('A'+(x-1)/n)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
