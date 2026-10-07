// Trimmed Mean | https://atcoder.jp/contests/abc291/tasks/abc291_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(5*n);
    for(int&x:a)std::cin>>x;
    std::sort(a.begin(),a.end());
    long long sum=0;
    for(int i=n;i<4*n;++i)sum+=a[i];
    std::cout<<std::setprecision(15)<<static_cast<double>(sum)/(3*n)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
