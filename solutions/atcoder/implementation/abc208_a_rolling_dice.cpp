// Rolling Dice | https://atcoder.jp/contests/abc208/tasks/abc208_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<(a<=b&&b<=6*a?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
