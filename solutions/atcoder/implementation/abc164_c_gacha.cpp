// gacha | https://atcoder.jp/contests/abc164/tasks/abc164_c
// Time: O(n L log n); extra space: O(n L).
#include <iostream>
#include <set>
#include <string>



void solve() {
    int n;std::cin>>n;std::set<std::string>kinds;while(n--){std::string s;std::cin>>s;kinds.insert(s);}std::cout<<kinds.size()<<'\n';
}

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    solve();
}
