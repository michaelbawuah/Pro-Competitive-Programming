// Nice Grid | https://atcoder.jp/contests/abc264/tasks/abc264_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int r,c;std::cin>>r>>c;int layer=std::min({r-1,c-1,15-r,15-c});std::cout<<(layer%2==0?"black":"white")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
