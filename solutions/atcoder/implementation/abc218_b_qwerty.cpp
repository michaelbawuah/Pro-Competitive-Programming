// qwerty | https://atcoder.jp/contests/abc218/tasks/abc218_b
// Time: O(1); extra space: O(1).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>



void solve() {
    for(int i=0;i<26;++i){int x;std::cin>>x;std::cout<<static_cast<char>('a'+x-1);}std::cout<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
