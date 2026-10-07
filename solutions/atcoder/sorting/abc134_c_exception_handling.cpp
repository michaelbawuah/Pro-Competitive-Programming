// Exception Handling | https://atcoder.jp/contests/abc134/tasks/abc134_c
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n),b;
    for(int&x:a)std::cin>>x;
    b=a;
    std::sort(b.begin(),b.end());
    for(int x:a)std::cout<<(x==b.back()?b[n-2]:b.back())<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
