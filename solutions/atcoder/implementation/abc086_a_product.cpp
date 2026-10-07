// Product | https://atcoder.jp/contests/abc086/tasks/abc086_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int a,b; std::cin>>a>>b; std::cout<<((a%2==0||b%2==0)?"Even":"Odd")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
