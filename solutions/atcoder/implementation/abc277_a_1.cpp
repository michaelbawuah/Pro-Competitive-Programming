// ^{-1} | https://atcoder.jp/contests/abc277/tasks/abc277_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x;std::cin>>n>>x;for(int i=1;i<=n;++i){int value;std::cin>>value;if(value==x)std::cout<<i<<'\n';}
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
