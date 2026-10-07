// Triangular Relationship | https://atcoder.jp/contests/abc108/tasks/arc102_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,k;std::cin>>n>>k;long long z=n/k,ans=z*z*z;if(k%2==0){long long h=(n+k/2)/k;ans+=h*h*h;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
