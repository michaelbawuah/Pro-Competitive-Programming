// Cut | https://atcoder.jp/contests/abc368/tasks/abc368_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    for(int i=0;i<n;++i)std::cout<<a[(n-k+i)%n]<<(i+1==n?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
