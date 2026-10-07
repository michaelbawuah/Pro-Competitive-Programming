// Binary Alchemy | https://atcoder.jp/contests/abc370/tasks/abc370_b
// Time: O(n^2); extra space: O(n^2).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<std::vector<int>>a(n+1,std::vector<int>(n+1));for(int i=1;i<=n;++i)for(int j=1;j<=i;++j)std::cin>>a[i][j];int current=1;for(int element=1;element<=n;++element)current=a[std::max(current,element)][std::min(current,element)];std::cout<<current<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
