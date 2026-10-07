// City Savers | https://atcoder.jp/contests/abc135/tasks/abc135_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<long long>a(n+1);for(auto&x:a)std::cin>>x;long long ans=0;for(int i=0;i<n;++i){long long power;std::cin>>power;long long take=std::min(a[i],power);ans+=take;power-=take;take=std::min(a[i+1],power);a[i+1]-=take;ans+=take;}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
