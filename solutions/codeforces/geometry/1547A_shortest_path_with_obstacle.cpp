// Shortest Path with Obstacle | https://codeforces.com/problemset/problem/1547/A
// Time: O(1) per case; extra space: O(1).
#include <algorithm>
#include <cstdlib>
#include <iostream>



void solve() {
    int tests; std::cin >> tests;
    while (tests-- > 0) {
        int ax,ay,bx,by,fx,fy; std::cin >> ax >> ay >> bx >> by >> fx >> fy;
        int answer=std::abs(ax-bx)+std::abs(ay-by);
        if ((ax==bx && bx==fx && std::min(ay,by)<fy && fy<std::max(ay,by)) ||
            (ay==by && by==fy && std::min(ax,bx)<fx && fx<std::max(ax,bx))) answer+=2;
        std::cout << answer << '\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
