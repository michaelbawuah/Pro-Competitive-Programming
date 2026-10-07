// You should output ARC, though this is ABC. | https://atcoder.jp/contests/abc255/tasks/abc255_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int r,c,a[2][2];std::cin>>r>>c;for(auto&row:a)for(int&x:row)std::cin>>x;std::cout<<a[r-1][c-1]<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
