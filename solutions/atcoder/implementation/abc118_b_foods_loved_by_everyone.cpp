// Foods Loved by Everyone | https://atcoder.jp/contests/abc118/tasks/abc118_b
// Time: O(N M); extra space: O(M).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m;
    std::cin>>n>>m;
    std::vector<int>count(m);
    for(int i=0;i<n;++i) {
        int k;
        std::cin>>k;
        while(k--) {
            int x;
            std::cin>>x;
            ++count[x-1];
        }
    }
    std::cout<<std::count(count.begin(),count.end(),n)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
