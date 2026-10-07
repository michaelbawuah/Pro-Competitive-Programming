// Great Ocean View | https://atcoder.jp/contests/abc124/tasks/abc124_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,highest=0,ans=0;std::cin>>n;while(n--){int h;std::cin>>h;if(h>=highest)++ans;highest=std::max(highest,h);}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
