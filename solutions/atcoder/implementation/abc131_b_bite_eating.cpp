// Bite Eating | https://atcoder.jp/contests/abc131/tasks/abc131_b
// Time: O(n); extra space: O(1).
#include <cstdlib>
#include <iostream>



void solve() {
    int n,l,total=0,best=1000;std::cin>>n>>l;for(int i=0;i<n;++i){int x=l+i;total+=x;if(std::abs(x)<std::abs(best))best=x;}std::cout<<total-best<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
