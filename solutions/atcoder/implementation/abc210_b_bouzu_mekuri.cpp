// Bouzu Mekuri | https://atcoder.jp/contests/abc210/tasks/abc210_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;std::cout<<(s.find('1')%2==0?"Takahashi":"Aoki")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
