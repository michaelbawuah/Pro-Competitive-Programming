// Good morning | https://atcoder.jp/contests/abc245/tasks/abc245_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    long long a,b,c,d;
    std::cin>>a>>b>>c>>d;
    std::cout<<(60*a+b<=60*c+d?"Takahashi":"Aoki")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
