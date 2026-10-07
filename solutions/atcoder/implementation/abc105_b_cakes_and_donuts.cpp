// Cakes and Donuts | https://atcoder.jp/contests/abc105/tasks/abc105_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;bool ok=false;for(int i=0;4*i<=n;++i)ok=ok||(n-4*i)%7==0;std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
