// Some Sums | https://atcoder.jp/contests/abc083/tasks/abc083_b
// Time: O(n log n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,a,b,ans=0;std::cin>>n>>a>>b;for(int i=1;i<=n;++i){int sum=0;for(int v=i;v;v/=10)sum+=v%10;if(a<=sum&&sum<=b)ans+=i;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
