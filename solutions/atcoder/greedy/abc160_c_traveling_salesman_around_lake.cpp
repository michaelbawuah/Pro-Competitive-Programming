// Traveling Salesman around Lake | https://atcoder.jp/contests/abc160/tasks/abc160_c
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int k,n;std::cin>>k>>n;std::vector<int>a(n);for(int&x:a)std::cin>>x;int gap=k-a.back()+a.front();for(int i=1;i<n;++i)gap=std::max(gap,a[i]-a[i-1]);std::cout<<k-gap<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
