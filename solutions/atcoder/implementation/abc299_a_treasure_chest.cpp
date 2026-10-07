// Treasure Chest | https://atcoder.jp/contests/abc299/tasks/abc299_a
// Time: O(n); extra space: O(n).
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void solve() {
    int n;
    std::string s;
    std::cin>>n>>s;
    auto star=s.find('*');
    std::cout<<(s.find('|')<star&&star<s.rfind('|')?"in":"out")<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
