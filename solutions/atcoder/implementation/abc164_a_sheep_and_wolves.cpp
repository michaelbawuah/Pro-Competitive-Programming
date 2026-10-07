// Sheep and Wolves | https://atcoder.jp/contests/abc164/tasks/abc164_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long s,w;
    std::cin>>s>>w;
    std::cout<<(w>=s?"unsafe":"safe")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
