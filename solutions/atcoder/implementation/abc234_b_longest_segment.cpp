// Longest Segment | https://atcoder.jp/contests/abc234/tasks/abc234_b
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>x(n),y(n);
    for(int i=0;i<n;++i)std::cin>>x[i]>>y[i];
    long long best=0;
    for(int i=0;i<n;++i)for(int j=0;j<i;++j) {
        long long dx=x[i]-x[j],dy=y[i]-y[j];
        best=std::max(best,dx*dx+dy*dy);
    }
    std::cout<<std::setprecision(15)<<std::sqrt(static_cast<double>(best))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
