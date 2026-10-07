// Balance | https://atcoder.jp/contests/abc129/tasks/abc129_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>



void solve() {
    int n,total=0;std::cin>>n;std::vector<int>a(n);for(int&x:a){std::cin>>x;total+=x;}int left=0,ans=1000000000;for(int i=0;i+1<n;++i){left+=a[i];ans=std::min(ans,std::abs(2*left-total));}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
