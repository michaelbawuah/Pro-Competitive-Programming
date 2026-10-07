// Harmony | https://atcoder.jp/contests/abc135/tasks/abc135_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b;
    std::cin>>a>>b;
    if((a+b)%2)std::cout<<"IMPOSSIBLE\n";
    else std::cout<<(a+b)/2<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
