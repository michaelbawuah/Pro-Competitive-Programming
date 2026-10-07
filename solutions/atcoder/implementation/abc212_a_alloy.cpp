// Alloy | https://atcoder.jp/contests/abc212/tasks/abc212_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<(a==0?"Silver":b==0?"Gold":"Alloy")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
