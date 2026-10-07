// Find snuke | https://atcoder.jp/contests/abc302/tasks/abc302_b
// Time: O(HW); extra space: O(HW).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int h,w;std::cin>>h>>w;std::vector<std::string>s(h);for(auto&row:s)std::cin>>row;std::string word="snuke";for(int i=0;i<h;++i)for(int j=0;j<w;++j)for(int dr=-1;dr<=1;++dr)for(int dc=-1;dc<=1;++dc)if(dr||dc){bool ok=true;for(int k=0;k<5;++k){int r=i+k*dr,c=j+k*dc;if(r<0||r>=h||c<0||c>=w||s[r][c]!=word[k])ok=false;}if(ok){for(int k=0;k<5;++k)std::cout<<i+k*dr+1<<' '<<j+k*dc+1<<'\n';return;}}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
