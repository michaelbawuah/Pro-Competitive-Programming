// AtCoder Line | https://atcoder.jp/contests/abc352/tasks/abc352_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long n,x,y,z;std::cin>>n>>x>>y>>z;std::cout<<(std::min(x,y)<z&&z<std::max(x,y)?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
