// Tomorrow | https://atcoder.jp/contests/abc331/tasks/abc331_a
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int months,days,y,m,d;
    std::cin>>months>>days>>y>>m>>d;
    if(++d>days) {
        d=1;
        if(++m>months) {
            m=1;
            ++y;
        }
    }
    std::cout<<y<<' '<<m<<' '<<d<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
