// A Recursive Function | https://atcoder.jp/contests/abc273/tasks/abc273_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::cin>>n;
    long long answer=1;
    for(int i=1;i<=n;++i)answer*=i;
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
