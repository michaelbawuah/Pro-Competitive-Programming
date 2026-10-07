// Mix Juice | https://atcoder.jp/contests/abc171/tasks/abc171_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    std::sort(a.begin(),a.end());
    int sum=0;
    for(int i=0;i<k;++i)sum+=a[i];
    std::cout<<sum<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
