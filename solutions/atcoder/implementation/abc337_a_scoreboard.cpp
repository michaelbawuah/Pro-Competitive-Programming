// Scoreboard | https://atcoder.jp/contests/abc337/tasks/abc337_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,first=0,second=0;
    std::cin>>n;
    while(n--) {
        int x,y;
        std::cin>>x>>y;
        first+=x;
        second+=y;
    }
    std::cout<<(first>second?"Takahashi":first<second?"Aoki":"Draw")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
