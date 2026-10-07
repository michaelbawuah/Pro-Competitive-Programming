// Trick or Treat | https://atcoder.jp/contests/abc166/tasks/abc166_b
// Time: O(N+total owners); extra space: O(N).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,k;
    std::cin>>n>>k;
    std::vector<bool>has(n);
    while(k--) {
        int d;
        std::cin>>d;
        while(d--) {
            int who;
            std::cin>>who;
            has[who-1]=true;
        }
    }
    std::cout<<std::count(has.begin(),has.end(),false)<<'\n';
}
int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
