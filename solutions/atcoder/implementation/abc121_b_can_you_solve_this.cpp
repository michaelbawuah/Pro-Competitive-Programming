// Can you solve this? | https://atcoder.jp/contests/abc121/tasks/abc121_b
// Time: O(N M); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m,c;std::cin>>n>>m>>c;std::vector<int>b(m);for(int&x:b)std::cin>>x;int ans=0;while(n--){int sum=c;for(int x:b){int a;std::cin>>a;sum+=a*x;}ans+=sum>0;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
