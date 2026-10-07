// Intersection | https://atcoder.jp/contests/abc199/tasks/abc199_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,low=1,high=1000;std::cin>>n;for(int i=0;i<n;++i){int a;std::cin>>a;low=std::max(low,a);}for(int i=0;i<n;++i){int b;std::cin>>b;high=std::min(high,b);}std::cout<<std::max(0,high-low+1)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
