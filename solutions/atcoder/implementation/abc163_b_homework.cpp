// Homework | https://atcoder.jp/contests/abc163/tasks/abc163_b
// Time: O(M); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;while(m--){int days;std::cin>>days;n-=days;}std::cout<<(n>=0?n:-1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
