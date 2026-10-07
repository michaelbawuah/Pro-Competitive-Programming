// Enlarged Checker Board | https://atcoder.jp/contests/abc250/tasks/abc250_b
// Time: O(N^2 AB); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,a,b;
    std::cin>>n>>a>>b;
    for(int i=0;i<n*a;++i) {
        for(int j=0;j<n*b;++j)std::cout<<((i/a+j/b)%2?'#':'.');
        std::cout<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
