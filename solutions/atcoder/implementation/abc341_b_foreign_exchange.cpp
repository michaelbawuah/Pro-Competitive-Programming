// Foreign Exchange | https://atcoder.jp/contests/abc341/tasks/abc341_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<long long>a(n);
    for(auto&x:a)std::cin>>x;
    for(int i=0;i<n-1;++i) {
        long long s,t;
        std::cin>>s>>t;
        a[i+1]+=a[i]/s*t;
    }
    std::cout<<a.back()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
