// Sanitize Hands | https://atcoder.jp/contests/abc357/tasks/abc357_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,m,count=0;
    std::cin>>n>>m;
    while(n--) {
        int hands;
        std::cin>>hands;
        if(m>=hands)++count;
        m=std::max(0,m-hands);
    }
    std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
