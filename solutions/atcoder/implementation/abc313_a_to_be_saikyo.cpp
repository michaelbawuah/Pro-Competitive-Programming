// To Be Saikyo | https://atcoder.jp/contests/abc313/tasks/abc313_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,first;std::cin>>n>>first;int answer=0;for(int i=1;i<n;++i){int p;std::cin>>p;answer=std::max(answer,p-first+1);}std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
