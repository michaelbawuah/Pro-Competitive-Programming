// Blocks on Grid | https://atcoder.jp/contests/abc186/tasks/abc186_b
// Time: O(H W); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w,sum=0,minimum=100;
    std::cin>>h>>w;
    for(int i=0;i<h*w;++i) {
        int x;
        std::cin>>x;
        sum+=x;
        minimum=std::min(minimum,x);
    }
    std::cout<<sum-h*w*minimum<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
