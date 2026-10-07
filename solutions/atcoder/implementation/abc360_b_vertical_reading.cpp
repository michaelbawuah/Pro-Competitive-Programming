// Vertical Reading | https://atcoder.jp/contests/abc360/tasks/abc360_b
// Time: O(|S|^2); extra space: O(|S|+|T|).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    std::string s,t;
    std::cin>>s>>t;
    bool possible=false;
    for(std::size_t width=1;width<s.size();++width)for(std::size_t col=0;col<width;++col) {
        std::string read;
        for(std::size_t i=col;i<s.size();i+=width)read+=s[i];
        possible=possible||read==t;
    }
    std::cout<<(possible?"Yes":"No")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
