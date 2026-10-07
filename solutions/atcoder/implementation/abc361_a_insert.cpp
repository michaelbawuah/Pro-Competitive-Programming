// Insert | https://atcoder.jp/contests/abc361/tasks/abc361_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k,x;
    std::cin>>n>>k>>x;
    for(int i=1;i<=n;++i) {
        int a;
        std::cin>>a;
        if(i>1)std::cout<<' ';
        std::cout<<a;
        if(i==k)std::cout<<' '<<x;
    }
    std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
