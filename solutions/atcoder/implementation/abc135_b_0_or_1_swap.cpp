// 0 or 1 Swap | https://atcoder.jp/contests/abc135/tasks/abc135_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,bad=0;std::cin>>n;for(int i=1;i<=n;++i){int x;std::cin>>x;bad+=x!=i;}std::cout<<(bad==0||bad==2?"YES":"NO")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
