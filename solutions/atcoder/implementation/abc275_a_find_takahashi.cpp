// Find Takahashi | https://atcoder.jp/contests/abc275/tasks/abc275_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,best=-1,index=0;
    std::cin>>n;
    for(int i=1;i<=n;++i) {
        int h;
        std::cin>>h;
        if(h>best) {
            best=h;
            index=i;
        }
    }
    std::cout<<index<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
