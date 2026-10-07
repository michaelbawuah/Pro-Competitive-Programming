// How many? | https://atcoder.jp/contests/abc214/tasks/abc214_b
// Time: O(S^3); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int s,t,ans=0;std::cin>>s>>t;for(int a=0;a<=s;++a)for(int b=0;a+b<=s;++b)for(int c=0;a+b+c<=s;++c)ans+=a*b*c<=t;std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
