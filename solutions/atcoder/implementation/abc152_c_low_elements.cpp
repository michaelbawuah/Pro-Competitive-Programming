// Low Elements | https://atcoder.jp/contests/abc152/tasks/abc152_c
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,low=1000000000,ans=0;std::cin>>n;while(n--){int x;std::cin>>x;low=std::min(low,x);ans+=x==low;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
