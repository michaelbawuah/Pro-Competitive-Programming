// Spot the Difference | https://atcoder.jp/contests/abc351/tasks/abc351_b
// Time: O(n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<std::string>a(n);
    for(auto&s:a)std::cin>>s;
    for(int i=0;i<n;++i) {
        std::string b;
        std::cin>>b;
        for(int j=0;j<n;++j)if(a[i][j]!=b[j])std::cout<<i+1<<' '<<j+1<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
