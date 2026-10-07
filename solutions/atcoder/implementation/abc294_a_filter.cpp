// Filter | https://atcoder.jp/contests/abc294/tasks/abc294_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n;std::cin>>n;bool first=true;while(n--){int x;std::cin>>x;if(x%2==0){if(!first)std::cout<<' ';std::cout<<x;first=false;}}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
