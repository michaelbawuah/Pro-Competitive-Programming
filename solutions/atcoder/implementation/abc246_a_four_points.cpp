// Four Points | https://atcoder.jp/contests/abc246/tasks/abc246_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    int x1,y1,x2,y2,x3,y3;std::cin>>x1>>y1>>x2>>y2>>x3>>y3;int x=x1==x2?x3:x1==x3?x2:x1;int y=y1==y2?y3:y1==y3?y2:y1;std::cout<<x<<' '<<y<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
