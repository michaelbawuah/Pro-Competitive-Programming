// ABC-DEF | https://atcoder.jp/contests/abc275/tasks/abc275_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    const long long mod=998244353;long long first=1,second=1;for(int i=0;i<6;++i){long long x;std::cin>>x;if(i<3)first=first*(x%mod)%mod;else second=second*(x%mod)%mod;}std::cout<<(first-second+mod)%mod<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
