// ABCDEFG | https://atcoder.jp/contests/abc305/tasks/abc305_b
// Time: O(1); extra space: O(1).
#include <cstdlib>
#include <iostream>



void solve() {
    char p,q;std::cin>>p>>q;int position[]={0,3,4,8,9,14,23};std::cout<<std::abs(position[p-'A']-position[q-'A'])<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
