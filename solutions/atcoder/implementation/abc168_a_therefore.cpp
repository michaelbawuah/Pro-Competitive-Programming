// ∴ (Therefore) | https://atcoder.jp/contests/abc168/tasks/abc168_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;int d=n%10;std::cout<<(d==3?"bon":d==0||d==1||d==6||d==8?"pon":"hon")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
