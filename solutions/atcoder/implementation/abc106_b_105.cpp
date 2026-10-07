// 105 | https://atcoder.jp/contests/abc106/tasks/abc106_b
// Time: O(N^2); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,answer=0;std::cin>>n;for(int x=1;x<=n;x+=2){int divisors=0;for(int d=1;d<=x;++d)divisors+=x%d==0;answer+=divisors==8;}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
