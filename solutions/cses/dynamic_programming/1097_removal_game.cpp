// Removal Game | https://cses.fi/problemset/task/1097/
// Time: O(n^2); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<long long>a(n),dp(n);long long sum=0;for(auto&x:a){std::cin>>x;sum+=x;}dp=a;for(int len=2;len<=n;++len)for(int left=0;left+len<=n;++left){int right=left+len-1;dp[left]=std::max(a[left]-dp[left+1],a[right]-dp[left]);}std::cout<<(sum+dp[0])/2<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
