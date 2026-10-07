// Divisible | https://atcoder.jp/contests/abc347/tasks/abc347_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;bool first=true;while(n--){int a;std::cin>>a;if(a%k==0){if(!first)std::cout<<' ';std::cout<<a/k;first=false;}}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
