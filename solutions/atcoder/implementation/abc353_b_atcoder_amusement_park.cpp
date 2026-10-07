// AtCoder Amusement Park | https://atcoder.jp/contests/abc353/tasks/abc353_b
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,k;std::cin>>n>>k;int rides=1,used=0;while(n--){int group;std::cin>>group;if(used+group>k){++rides;used=0;}used+=group;}std::cout<<rides<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
