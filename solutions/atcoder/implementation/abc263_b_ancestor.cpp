// Ancestor | https://atcoder.jp/contests/abc263/tasks/abc263_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>parent(n+1);for(int i=2;i<=n;++i)std::cin>>parent[i];int steps=0;while(n!=1){n=parent[n];++steps;}std::cout<<steps<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
