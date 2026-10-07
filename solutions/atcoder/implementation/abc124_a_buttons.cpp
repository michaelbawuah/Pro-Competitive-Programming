// Buttons | https://atcoder.jp/contests/abc124/tasks/abc124_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<(std::max({a+b,2*a-1,2*b-1}))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
