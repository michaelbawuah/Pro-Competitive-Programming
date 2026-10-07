// Product Max | https://atcoder.jp/contests/abc178/tasks/abc178_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b,c,d;std::cin>>a>>b>>c>>d;std::cout<<(std::max({a*c,a*d,b*c,b*d}))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
