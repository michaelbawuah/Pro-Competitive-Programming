// /\/\/\/ | https://atcoder.jp/contests/abc111/tasks/arc103_a
// Time: O(n+V log V); extra space: O(V).
#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>f[2]={std::vector<int>(100001),std::vector<int>(100001)};for(int i=0;i<n;++i){int x;std::cin>>x;++f[i%2][x];}std::vector<std::pair<int,int>>v[2];for(int parity=0;parity<2;++parity){for(int x=0;x<=100000;++x)v[parity].push_back({f[parity][x],x});std::sort(v[parity].rbegin(),v[parity].rend());}int keep=0;for(int i=0;i<2;++i)for(int j=0;j<2;++j)if(v[0][i].second!=v[1][j].second)keep=std::max(keep,v[0][i].first+v[1][j].first);std::cout<<n-keep<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
