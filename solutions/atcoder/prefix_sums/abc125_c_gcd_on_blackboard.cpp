// GCD on Blackboard | https://atcoder.jp/contests/abc125/tasks/abc125_c
// Time: O(n log A); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(n),pre(n+1),suf(n+1);for(int&x:a)std::cin>>x;for(int i=0;i<n;++i)pre[i+1]=std::gcd(pre[i],a[i]);for(int i=n-1;i>=0;--i)suf[i]=std::gcd(suf[i+1],a[i]);int ans=0;for(int i=0;i<n;++i)ans=std::max(ans,std::gcd(pre[i],suf[i+1]));std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
