// ASCII Art | https://atcoder.jp/contests/abc294/tasks/abc294_b
// Time: O(HW); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int h,w;
    std::cin>>h>>w;
    for(int i=0;i<h;++i) {
        for(int j=0;j<w;++j) {
            int x;
            std::cin>>x;
            std::cout<<(x==0?'.':static_cast<char>('A'+x-1));
        }
        std::cout<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
