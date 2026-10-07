// FizzBuzz Sum | https://atcoder.jp/contests/abc162/tasks/abc162_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;long long ans=0;for(int i=1;i<=n;++i)if(i%3&&i%5)ans+=i;std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
