// Star or Not | https://atcoder.jp/contests/abc225/tasks/abc225_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    std::vector<int>degree(n);
    for(int i=1;i<n;++i) {
        int u,v;
        std::cin>>u>>v;
        ++degree[u-1];
        ++degree[v-1];
    }
    std::cout<<(*std::max_element(degree.begin(),degree.end())==n-1?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
