// Good Distance | https://atcoder.jp/contests/abc133/tasks/abc133_b
// Time: O(N^2 (D+sqrt(D) X)); extra space: O(N D).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,d;
    std::cin>>n>>d;
    std::vector<std::vector<int>>x(n,std::vector<int>(d));
    for(auto&r:x)for(int&v:r)std::cin>>v;
    int ans=0;
    for(int i=0;i<n;++i)for(int j=0;j<i;++j) {
        int sum=0;
        for(int k=0;k<d;++k) {
            int diff=x[i][k]-x[j][k];
            sum+=diff*diff;
        }
        int root=0;
        while(root*root<sum)++root;
        ans+=root*root==sum;
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
