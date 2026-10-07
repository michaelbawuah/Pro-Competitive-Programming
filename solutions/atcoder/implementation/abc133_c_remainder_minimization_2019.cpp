// Remainder Minimization 2019 | https://atcoder.jp/contests/abc133/tasks/abc133_c
// Time: O(min(R-L,2019)^2); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long l,r;std::cin>>l>>r;int ans=2019;if(r-l>=2019)ans=0;else for(long long i=l;i<r;++i)for(long long j=i+1;j<=r;++j)ans=std::min(ans,static_cast<int>((i%2019)*(j%2019)%2019));std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
