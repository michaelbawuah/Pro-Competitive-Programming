// Find Multiple | https://atcoder.jp/contests/abc220/tasks/abc220_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b,c;std::cin>>a>>b>>c;int first=(a+c-1)/c*c;std::cout<<(first<=b?first:-1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
