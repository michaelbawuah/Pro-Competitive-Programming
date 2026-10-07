// Lower | https://atcoder.jp/contests/abc139/tasks/abc139_c
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,prev,run=0,ans=0;std::cin>>n>>prev;for(int i=1;i<n;++i){int h;std::cin>>h;run=h<=prev?run+1:0;ans=std::max(ans,run);prev=h;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
