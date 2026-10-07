// Ruined Square | https://atcoder.jp/contests/abc108/tasks/abc108_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int x1,y1,x2,y2;std::cin>>x1>>y1>>x2>>y2;int dx=x2-x1,dy=y2-y1;std::cout<<x2-dy<<' '<<y2+dx<<' '<<x1-dy<<' '<<y1+dx<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
