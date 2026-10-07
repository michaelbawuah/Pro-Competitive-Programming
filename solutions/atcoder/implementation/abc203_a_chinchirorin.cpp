// Chinchirorin | https://atcoder.jp/contests/abc203/tasks/abc203_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,c;std::cin>>a>>b>>c;std::cout<<(a==b?c:a==c?b:b==c?a:0)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
