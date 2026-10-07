// When? | https://atcoder.jp/contests/abc258/tasks/abc258_a
// Time: O(1); extra space: O(1).
#include <iomanip>
#include <iostream>



void solve() {
    int k;std::cin>>k;std::cout<<21+k/60<<':'<<std::setfill('0')<<std::setw(2)<<k%60<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
