// Pawn on a Grid | https://atcoder.jp/contests/abc280/tasks/abc280_a
// Time: O(HW); extra space: O(W).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w,answer=0;
    std::cin>>h>>w;
    while(h--) {
        std::string s;
        std::cin>>s;
        answer+=std::count(s.begin(),s.end(),'#');
    }
    std::cout<<answer<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
