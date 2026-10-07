// Attack Survival | https://atcoder.jp/contests/abc141/tasks/abc141_c
// Time: O(n+q); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k,q;
    std::cin>>n>>k>>q;
    std::vector<int>count(n);
    for(int i=0;i<q;++i) {
        int who;
        std::cin>>who;
        ++count[who-1];
    }
    for(int x:count)std::cout<<(k-q+x>0?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
