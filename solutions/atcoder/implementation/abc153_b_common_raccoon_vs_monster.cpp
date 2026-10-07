// Common Raccoon vs Monster | https://atcoder.jp/contests/abc153/tasks/abc153_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long h,sum=0;int n;std::cin>>h>>n;while(n--){long long x;std::cin>>x;sum+=x;}std::cout<<(sum>=h?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
