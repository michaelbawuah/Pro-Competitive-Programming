// All Green | https://atcoder.jp/contests/abc104/tasks/abc104_c
// Time: O(D 2^D); extra space: O(D).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int d,g;
    std::cin>>d>>g;
    std::vector<int>p(d),c(d);
    for(int i=0;i<d;++i)std::cin>>p[i]>>c[i];
    int ans=1000000;
    for(int mask=0;mask<(1<<d);++mask) {
        int score=0,count=0;
        for(int i=0;i<d;++i)if(mask>>i&1) {
            score+=p[i]*100*(i+1)+c[i];
            count+=p[i];
        }
        for(int i=d-1;i>=0&&score<g;--i)if(!(mask>>i&1)) {
            int take=std::min(p[i]-1,(g-score+100*(i+1)-1)/(100*(i+1)));
            score+=take*100*(i+1);
            count+=take;
        }
        if(score>=g)ans=std::min(ans,count);
    }
    std::cout<<ans<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
