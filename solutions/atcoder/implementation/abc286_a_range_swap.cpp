// Range Swap | https://atcoder.jp/contests/abc286/tasks/abc286_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,p,q,r,s;std::cin>>n>>p>>q>>r>>s;std::vector<int>a(n);for(int&x:a)std::cin>>x;for(int offset=0;offset<=q-p;++offset)std::swap(a[p-1+offset],a[r-1+offset]);for(int i=0;i<n;++i)std::cout<<a[i]<<(i+1==n?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
