// Fill the Gaps | https://atcoder.jp/contests/abc301/tasks/abc301_b
// Time: O(output length); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,previous;std::cin>>n>>previous;std::cout<<previous;for(int i=1;i<n;++i){int next;std::cin>>next;int step=next>previous?1:-1;while(previous!=next){previous+=step;std::cout<<' '<<previous;}}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
