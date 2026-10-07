// Sum of gcd of Tuples (Easy) | https://atcoder.jp/contests/abc162/tasks/abc162_c
// Time: O(K^3 log K); extra space: O(1).
#include <iostream>
#include <numeric>



void solve() {
    int k;std::cin>>k;long long ans=0;for(int a=1;a<=k;++a)for(int b=1;b<=k;++b){int g=std::gcd(a,b);for(int c=1;c<=k;++c)ans+=std::gcd(g,c);}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
