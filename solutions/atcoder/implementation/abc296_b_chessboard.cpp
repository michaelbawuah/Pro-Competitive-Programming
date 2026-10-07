// Chessboard | https://atcoder.jp/contests/abc296/tasks/abc296_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    for(int row=0;row<8;++row) {
        std::string s;
        std::cin>>s;
        for(int col=0;col<8;++col)if(s[col]=='*')std::cout<<static_cast<char>('a'+col)<<8-row<<'\n';
    }
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
