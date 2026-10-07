// The bottom of the ninth | https://atcoder.jp/contests/abc351/tasks/abc351_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int difference=0;
    for(int i=0;i<17;++i) {
        int score;
        std::cin>>score;
        difference+=i<9?score:-score;
    }
    std::cout<<difference+1<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
