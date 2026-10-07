// Counting Passes | https://atcoder.jp/contests/abc330/tasks/abc330_a
// Time: O(n); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n,l,count=0;
    std::cin>>n>>l;
    while(n--) {
        int score;
        std::cin>>score;
        count+=score>=l;
    }
    std::cout<<count<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
