// Line Sensor | https://atcoder.jp/contests/abc274/tasks/abc274_b
// Time: O(HW); extra space: O(W).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w;
    std::cin>>h>>w;
    std::vector<int>count(w);
    while(h--) {
        std::string s;
        std::cin>>s;
        for(int j=0;j<w;++j)count[j]+=s[j]=='#';
    }
    for(int j=0;j<w;++j)std::cout<<count[j]<<(j+1==w?'\n':' ');
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
