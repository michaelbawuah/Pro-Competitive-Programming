// Maintain Multiple Sequences | https://atcoder.jp/contests/abc271/tasks/abc271_b
// Time: O(total length+Q); extra space: O(total length+N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,q;
    std::cin>>n>>q;
    std::vector<std::vector<int>>a(n);
    for(auto&row:a) {
        int length;
        std::cin>>length;
        row.resize(length);
        for(int&x:row)std::cin>>x;
    }
    while(q--) {
        int s,t;
        std::cin>>s>>t;
        std::cout<<a[s-1][t-1]<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
