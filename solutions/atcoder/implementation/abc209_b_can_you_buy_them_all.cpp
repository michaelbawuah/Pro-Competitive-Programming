// Can you buy them all? | https://atcoder.jp/contests/abc209/tasks/abc209_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x;std::cin>>n>>x;int sum=0;for(int i=1;i<=n;++i){int price;std::cin>>price;sum+=price-(i%2==0);}std::cout<<(sum<=x?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
