// At Most 3 (Judge ver.) | https://atcoder.jp/contests/abc251/tasks/abc251_b
// Time: O(n^3+W); extra space: O(n+W).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,w;
    std::cin>>n>>w;
    std::vector<int>a(n);
    for(int&x:a)std::cin>>x;
    std::vector<bool>good(w+1);
    auto mark=[&](int sum) {
        if(sum<=w)good[sum]=true;
    };
    for(int i=0;i<n;++i) {
        mark(a[i]);
        for(int j=i+1;j<n;++j) {
            mark(a[i]+a[j]);
            for(int k=j+1;k<n;++k)mark(a[i]+a[j]+a[k]);
        }
    }
    std::cout<<std::count(good.begin(),good.end(),true)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
