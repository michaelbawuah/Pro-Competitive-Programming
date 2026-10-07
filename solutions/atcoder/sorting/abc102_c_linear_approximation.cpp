// Linear Approximation | https://atcoder.jp/contests/abc102/tasks/arc100_a
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<long long>a(n);for(int i=0;i<n;++i){std::cin>>a[i];a[i]-=i+1;}std::sort(a.begin(),a.end());long long ans=0;for(long long x:a)ans+=std::abs(x-a[n/2]);std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
