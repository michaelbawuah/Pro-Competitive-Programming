// Mongeness | https://atcoder.jp/contests/abc224/tasks/abc224_b
// Time: O(HW); extra space: O(HW).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w;
    std::cin>>h>>w;
    std::vector<std::vector<long long>>a(h,std::vector<long long>(w));
    for(auto&row:a)for(auto&x:row)std::cin>>x;
    bool ok=true;
    for(int i=0;i+1<h;++i)for(int j=0;j+1<w;++j)if(a[i][j]+a[i+1][j+1]>a[i+1][j]+a[i][j+1])ok=false;
    std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
