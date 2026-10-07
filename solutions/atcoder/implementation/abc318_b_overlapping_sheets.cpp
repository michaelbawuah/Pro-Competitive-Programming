// Overlapping sheets | https://atcoder.jp/contests/abc318/tasks/abc318_b
// Time: O(N*100^2); extra space: O(100^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::vector<bool>>covered(100,std::vector<bool>(100));
    while(n--) {
        int a,b,c,d;
        std::cin>>a>>b>>c>>d;
        for(int x=a;x<b;++x)for(int y=c;y<d;++y)covered[x][y]=true;
    }
    int area=0;
    for(const auto&row:covered)for(bool cell:row)area+=cell;
    std::cout<<area<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
