// Subarray Divisibility | https://cses.fi/problemset/task/1662/
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>count(n);
    count[0]=1;
    long long remainder=0,ans=0;
    for(int i=0;i<n;++i) {
        long long x;
        std::cin>>x;
        remainder=((remainder+x)%n+n)%n;
        ans+=count[remainder]++;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
