// Polygon | https://atcoder.jp/contests/abc117/tasks/abc117_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,sum=0,largest=0;
    std::cin>>n;
    while(n--) {
        int x;
        std::cin>>x;
        sum+=x;
        largest=std::max(largest,x);
    }
    std::cout<<(2*largest<sum?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
