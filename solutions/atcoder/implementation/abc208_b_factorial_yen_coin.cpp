// Factorial Yen Coin | https://atcoder.jp/contests/abc208/tasks/abc208_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int p;
    std::cin>>p;
    std::vector<int>factorial(11,1);
    for(int i=1;i<=10;++i)factorial[i]=factorial[i-1]*i;
    int ans=0;
    for(int i=10;i>=1;--i) {
        ans+=p/factorial[i];
        p%=factorial[i];
    }
    std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
