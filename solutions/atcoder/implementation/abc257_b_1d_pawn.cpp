// 1D Pawn | https://atcoder.jp/contests/abc257/tasks/abc257_b
// Time: O(K+Q); extra space: O(K).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k,q;std::cin>>n>>k>>q;std::vector<int>a(k);for(int&x:a)std::cin>>x;while(q--){int i;std::cin>>i;--i;if(a[i]<n&&(i+1==k||a[i]+1<a[i+1]))++a[i];}for(int i=0;i<k;++i)std::cout<<a[i]<<(i+1==k?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
