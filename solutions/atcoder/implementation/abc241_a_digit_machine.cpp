// Digit Machine | https://atcoder.jp/contests/abc241/tasks/abc241_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    std::vector<int>a(10);for(int&x:a)std::cin>>x;int value=0;for(int i=0;i<3;++i)value=a[value];std::cout<<value<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
