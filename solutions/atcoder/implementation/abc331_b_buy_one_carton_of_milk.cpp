// Buy One Carton of Milk | https://atcoder.jp/contests/abc331/tasks/abc331_b
// Time: O(N^3); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,s,m,l;
    std::cin>>n>>s>>m>>l;
    int best=1000000000;
    for(int a=0;a<=(n+5)/6;++a)for(int b=0;b<=(n+7)/8;++b)for(int c=0;c<=(n+11)/12;++c)if(6*a+8*b+12*c>=n)best=std::min(best,a*s+b*m+c*l);
    std::cout<<best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
