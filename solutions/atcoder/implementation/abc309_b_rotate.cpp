// Rotate | https://atcoder.jp/contests/abc309/tasks/abc309_b
// Time: O(n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::string>a(n);for(auto&s:a)std::cin>>s;auto b=a;for(int j=1;j<n;++j)b[0][j]=a[0][j-1];for(int i=1;i<n;++i)b[i][n-1]=a[i-1][n-1];for(int j=0;j<n-1;++j)b[n-1][j]=a[n-1][j+1];for(int i=0;i<n-1;++i)b[i][0]=a[i+1][0];for(const auto&s:b)std::cout<<s<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
