// Integer Sum | https://atcoder.jp/contests/abc272/tasks/abc272_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,sum=0;std::cin>>n;while(n--){int x;std::cin>>x;sum+=x;}std::cout<<sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
