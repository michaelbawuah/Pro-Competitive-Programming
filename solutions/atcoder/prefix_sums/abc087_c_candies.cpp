// Candies | https://atcoder.jp/contests/abc087/tasks/arc090_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>a(n),b(n);
    int lower=0,upper=0,ans=0;
    for(int&x:a)std::cin>>x;
    for(int&x:b) {
        std::cin>>x;
        lower+=x;
    }
    for(int i=0;i<n;++i) {
        upper+=a[i];
        ans=std::max(ans,upper+lower);
        lower-=b[i];
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
