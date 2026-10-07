// Nutrients | https://atcoder.jp/contests/abc356/tasks/abc356_b
// Time: O(NM); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,m;std::cin>>n>>m;std::vector<long long>need(m);for(auto&x:need)std::cin>>x;while(n--)for(int j=0;j<m;++j){long long amount;std::cin>>amount;need[j]-=amount;}bool ok=true;for(long long remaining:need)ok=ok&&remaining<=0;std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
