// Counting | https://atcoder.jp/contests/abc209/tasks/abc209_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    long long a,b;std::cin>>a>>b;std::cout<<(std::max(0LL,b-a+1))<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
