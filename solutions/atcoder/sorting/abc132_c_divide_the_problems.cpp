// Divide the Problems | https://atcoder.jp/contests/abc132/tasks/abc132_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    std::sort(a.begin(),a.end());
    std::cout<<a[n/2]-a[n/2-1]<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
