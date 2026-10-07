// Monsters Battle Royale | https://atcoder.jp/contests/abc118/tasks/abc118_c
// Time: O(n log A); extra space: O(1).
#include <iostream>
#include <numeric>



void solve() {
    int n,g=0;std::cin>>n;while(n--){int x;std::cin>>x;g=std::gcd(g,x);}std::cout<<g<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
