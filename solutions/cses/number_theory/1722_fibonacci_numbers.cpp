// Fibonacci Numbers | https://cses.fi/problemset/task/1722/
// Time: O(log n); extra space: O(log n).
#include <iostream>
#include <utility>



void solve() {
    long long n;std::cin>>n;const long long mod=1000000007;auto fib=[&](auto&& self,long long k)->std::pair<long long,long long>{if(k==0)return {0,1};auto[a,b]=self(self,k/2);long long c=a*((2*b-a+mod)%mod)%mod,d=(a*a+b*b)%mod;if(k%2)return {d,(c+d)%mod};return {c,d};};std::cout<<fib(fib,n).first<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
