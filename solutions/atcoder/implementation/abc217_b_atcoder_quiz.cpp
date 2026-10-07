// AtCoder Quiz | https://atcoder.jp/contests/abc217/tasks/abc217_b
// Time: O(1); extra space: O(1).
#include <iostream>
#include <set>
#include <string>

void solve() {
    std::set<std::string>remaining{"ABC","ARC","AGC","AHC"};
    for(int i=0;i<3;++i) {
        std::string s;
        std::cin>>s;
        remaining.erase(s);
    }
    std::cout<<*remaining.begin()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
