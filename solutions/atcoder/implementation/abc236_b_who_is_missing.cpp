// Who is missing? | https://atcoder.jp/contests/abc236/tasks/abc236_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,answer=0;std::cin>>n;for(int i=0;i<4*n-1;++i){int x;std::cin>>x;answer^=x;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
