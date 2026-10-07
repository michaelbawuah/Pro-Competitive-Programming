// 484558 | https://atcoder.jp/contests/abc271/tasks/abc271_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::string digit="0123456789ABCDEF";std::cout<<digit[n/16]<<digit[n%16]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
