// Count ABC | https://atcoder.jp/contests/abc150/tasks/abc150_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;int ans=0;for(int i=0;i+2<n;++i)ans+=s.compare(i,3,"ABC")==0;std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
