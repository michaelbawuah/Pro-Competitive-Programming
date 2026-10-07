// CTZ | https://atcoder.jp/contests/abc336/tasks/abc336_b
// Time: O(log N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,count=0;
    std::cin>>n;
    while(n%2==0) {
        n/=2;
        ++count;
    }
    std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
