// Same | https://atcoder.jp/contests/abc324/tasks/abc324_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,first;std::cin>>n>>first;bool same=true;for(int i=1;i<n;++i){int x;std::cin>>x;same=same&&x==first;}std::cout<<(same?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
