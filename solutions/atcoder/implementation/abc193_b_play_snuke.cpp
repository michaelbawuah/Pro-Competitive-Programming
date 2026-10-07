// Play Snuke | https://atcoder.jp/contests/abc193/tasks/abc193_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;int ans=1000000001;while(n--){int a,p,x;std::cin>>a>>p>>x;if(x>a)ans=std::min(ans,p);}std::cout<<(ans==1000000001?-1:ans)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
