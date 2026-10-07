// Shampoo | https://atcoder.jp/contests/abc243/tasks/abc243_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long v,a,b,c;std::cin>>v>>a>>b>>c;v%=a+b+c;std::cout<<(v<a?"F":v<a+b?"M":"T")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
