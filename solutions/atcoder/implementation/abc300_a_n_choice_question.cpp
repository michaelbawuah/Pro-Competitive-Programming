// N-choice question | https://atcoder.jp/contests/abc300/tasks/abc300_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,a,b;
    std::cin>>n>>a>>b;
    for(int i=1;i<=n;++i) {
        int c;
        std::cin>>c;
        if(c==a+b)std::cout<<i<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
