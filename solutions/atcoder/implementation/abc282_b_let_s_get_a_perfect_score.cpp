// Let's Get a Perfect Score | https://atcoder.jp/contests/abc282/tasks/abc282_b
// Time: O(N^2 M); extra space: O(NM).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<std::string>s(n);for(auto&x:s)std::cin>>x;int answer=0;for(int i=0;i<n;++i)for(int j=i+1;j<n;++j){bool ok=true;for(int k=0;k<m;++k)ok=ok&&(s[i][k]=='o'||s[j][k]=='o');answer+=ok;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
