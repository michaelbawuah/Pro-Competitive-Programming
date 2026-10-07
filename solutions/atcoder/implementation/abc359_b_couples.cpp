// Couples | https://atcoder.jp/contests/abc359/tasks/abc359_b
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;std::vector<int>a(2*n);for(int&x:a)std::cin>>x;int answer=0;for(int i=0;i+2<2*n;++i)answer+=a[i]==a[i+2];std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
