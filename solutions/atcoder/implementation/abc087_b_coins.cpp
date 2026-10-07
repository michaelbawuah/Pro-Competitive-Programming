// Coins | https://atcoder.jp/contests/abc087/tasks/abc087_b
// Time: O(A B); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b,c,x,ans=0;std::cin>>a>>b>>c>>x;for(int i=0;i<=a;++i)for(int j=0;j<=b;++j){int rem=x-500*i-100*j;if(rem>=0&&rem%50==0&&rem/50<=c)++ans;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
