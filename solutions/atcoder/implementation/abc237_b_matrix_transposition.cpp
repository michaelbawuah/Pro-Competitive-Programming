// Matrix Transposition | https://atcoder.jp/contests/abc237/tasks/abc237_b
// Time: O(HW); extra space: O(HW).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w;
    std::cin>>h>>w;
    std::vector<std::vector<int>>a(h,std::vector<int>(w));
    for(auto&row:a)for(int&x:row)std::cin>>x;
    for(int j=0;j<w;++j) {
        for(int i=0;i<h;++i)std::cout<<a[i][j]<<(i+1==h?'\n':' ');
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
