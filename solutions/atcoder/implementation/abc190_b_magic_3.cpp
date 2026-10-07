// Magic 3 | https://atcoder.jp/contests/abc190/tasks/abc190_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    long long s,d;
    std::cin>>n>>s>>d;
    bool ok=false;
    while(n--) {
        long long x,y;
        std::cin>>x>>y;
        ok=ok||(x<s&&y>d);
    }
    std::cout<<(ok?"Yes":"No")<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
