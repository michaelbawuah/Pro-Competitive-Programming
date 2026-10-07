// Not Too Hard | https://atcoder.jp/contests/abc328/tasks/abc328_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int n,x,sum=0;std::cin>>n>>x;while(n--){int score;std::cin>>score;if(score<=x)sum+=score;}std::cout<<sum<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
