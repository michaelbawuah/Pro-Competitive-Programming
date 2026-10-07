// 3-smooth Numbers | https://atcoder.jp/contests/abc324/tasks/abc324_b
// Time: O(log N); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long n;
    std::cin>>n;
    while(n%2==0)n/=2;
    while(n%3==0)n/=3;
    std::cout<<(n==1?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
