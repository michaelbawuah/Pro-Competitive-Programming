// Better Students Are Needed! | https://atcoder.jp/contests/abc260/tasks/abc260_b
// Time: O(n log n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

void solve() {
    int n,x,y,z;
    std::cin>>n>>x>>y>>z;
    std::vector<int>a(n),b(n),order(n);
    for(int&v:a)std::cin>>v;
    for(int&v:b)std::cin>>v;
    std::iota(order.begin(),order.end(),0);
    std::vector<bool>chosen(n);
    auto admit=[&](int count,int mode) {
        auto score=[&](int i) {
            return mode==0?a[i]:mode==1?b[i]:a[i]+b[i];
        };
        std::sort(order.begin(),order.end(),[&](int i,int j){return score(i)!=score(j)?score(i)>score(j):i<j;});
        for(int i:order)if(count>0&&!chosen[i]) {
            chosen[i]=true;
            --count;
        }
    };
    admit(x,0);
    admit(y,1);
    admit(z,2);
    for(int i=0;i<n;++i)if(chosen[i])std::cout<<i+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
