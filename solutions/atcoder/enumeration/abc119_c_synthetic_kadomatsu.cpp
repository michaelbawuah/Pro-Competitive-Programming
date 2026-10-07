// Synthetic Kadomatsu | https://atcoder.jp/contests/abc119/tasks/abc119_c
// Time: O(n 4^n); extra space: O(n).
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    int target[3];
    for(int&v:target)std::cin>>v;
    std::vector<int>l(n);
    for(int&v:l)std::cin>>v;
    int ans=1000000;
    for(int mask=0;mask<(1<<(2*n));++mask) {
        int sums[3]={},counts[3]={},work=mask;
        for(int x:l) {
            int group=work%4;
            work/=4;
            if(group<3) {
                sums[group]+=x;
                ++counts[group];
            }
        }
        if(counts[0]&&counts[1]&&counts[2]) {
            int cost=0;
            for(int i=0;i<3;++i)cost+=10*(counts[i]-1)+std::abs(sums[i]-target[i]);
            ans=std::min(ans,cost);
        }
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
