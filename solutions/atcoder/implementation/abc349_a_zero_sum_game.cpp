// Zero Sum Game | https://atcoder.jp/contests/abc349/tasks/abc349_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,sum=0;std::cin>>n;for(int i=1;i<n;++i){int a;std::cin>>a;sum+=a;}std::cout<<-sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
