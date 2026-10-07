// Favorite Sound | https://atcoder.jp/contests/abc120/tasks/abc120_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,c;std::cin>>a>>b>>c;std::cout<<(std::min(b/a,c))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
