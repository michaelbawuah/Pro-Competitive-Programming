// Attention | https://atcoder.jp/contests/abc098/tasks/arc098_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::string s;std::cin>>n>>s;int east=std::count(s.begin(),s.end(),'E'),west=0,ans=n;for(char c:s){east-=c=='E';ans=std::min(ans,west+east);west+=c=='W';}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
