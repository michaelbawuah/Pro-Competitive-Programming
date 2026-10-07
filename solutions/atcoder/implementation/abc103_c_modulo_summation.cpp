// Modulo Summation | https://atcoder.jp/contests/abc103/tasks/abc103_c
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;long long sum=0;std::cin>>n;while(n--){int x;std::cin>>x;sum+=x-1;}std::cout<<sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
