// Who Ate the Cake? | https://atcoder.jp/contests/abc355/tasks/abc355_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<(a==b?-1:6-a-b)<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
