// Resale | https://atcoder.jp/contests/abc125/tasks/abc125_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>v(n);for(int&x:v)std::cin>>x;int ans=0;for(int x:v){int cost;std::cin>>cost;ans+=std::max(0,x-cost);}std::cout<<ans<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
