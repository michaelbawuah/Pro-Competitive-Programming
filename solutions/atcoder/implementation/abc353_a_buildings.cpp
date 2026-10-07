// Buildings | https://atcoder.jp/contests/abc353/tasks/abc353_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,first,answer=-1;
    std::cin>>n>>first;
    for(int i=2;i<=n;++i) {
        int height;
        std::cin>>height;
        if(answer==-1&&height>first)answer=i;
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
