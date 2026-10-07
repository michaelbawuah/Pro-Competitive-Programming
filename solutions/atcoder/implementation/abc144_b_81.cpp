// 81 | https://atcoder.jp/contests/abc144/tasks/abc144_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;bool ok=false;for(int a=1;a<=9;++a)for(int b=1;b<=9;++b)ok=ok||a*b==n;std::cout<<(ok?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
