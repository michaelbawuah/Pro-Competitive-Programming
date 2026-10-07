// Adjacent Product | https://atcoder.jp/contests/abc346/tasks/abc346_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,previous;
    std::cin>>n>>previous;
    for(int i=1;i<n;++i) {
        int current;
        std::cin>>current;
        std::cout<<previous*current<<(i+1==n?'\n':' ');
        previous=current;
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
